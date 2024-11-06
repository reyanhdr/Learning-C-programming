#include <stdio.h>
#include <math.h>

#define SIZE_MICROSOFT 12
#define SIZE_APPLE 12
#define SIZE 12

struct Table{
    int Min;
    int Max;
    float Mid;
    int Frequency;
    int CumilitiveFrequency;
    int di;
    float fidi;
    float fi_di2;
};

// Class Interval
void ClassInterval(int Arr[], int size, int *NoClasses, int *ClassInterval) {
    float NoClass;
    NoClass = 1 + 3.322 * log10(size);  // Use size instead of hardcoded 12
    *ClassInterval = (int)ceil((Arr[size - 1] - Arr[0]) / NoClass);
    *NoClasses = (int)ceil(NoClass);
}

// Frequency count
void FrequencyCount(int Arr[], struct Table Fr[], int ClassInterval, int NoClasses) {
    int K1 = Arr[0];
    int K2 = K1 + ClassInterval;
    Fr[0].CumilitiveFrequency=0;
    for (int i = 1; i <= NoClasses; i++) { // Correct loop condition
        Fr[i].Min=K1;
        Fr[i].Max=K2;
        Fr[i].Mid=(float)(K1+K2)/2;
        int count = 0;

        for(int j=K1;j<K2;j++){
            for(int l=0;l<SIZE;l++){
                if(Arr[l]==j)
                    count++;
            }
        }
        Fr[i].Frequency = count;
        Fr[i].CumilitiveFrequency=count+Fr[i-1].CumilitiveFrequency;
        K1 = K2;
        K2 = K1 + ClassInterval;
    }
}

// Function to calculate mean
float calculate_mean(float Mode, float Median) {
    return (3*Median-Mode)/2; 
}

// Function to calculate median
float calculate_median(struct Table Arr[], int size,int C) {
    int Fc,Fm,N;

    int max=Arr[1].Frequency;
    int index;

    for(int i=2;i<size;i++){
        if(max<Arr[i].Frequency)
            index=i; 
    }
    Fc=Arr[index-1].CumilitiveFrequency;
    Fm=Arr[index].Frequency;
    N=Arr[size].CumilitiveFrequency;

    float Median= Arr[index].Min + ((((N/2)-Fc)/Fm))*C;

    return Median;
    
}

int Find_Di(struct Table Arr[],int size,int C){
    int max=Arr[1].Frequency;
    int index;

    for(int i=2;i<size;i++){
        if(max<Arr[i].Frequency)
            index=i; 
    }

    for(int i=1;i<=size;i++){
        Arr[i].di=(Arr[i].Mid-Arr[index].Mid)/C;
    }
}

// Function to calculate mode (most frequent value)
int calculate_mode(struct Table Arr[], int size,int C) {
    
    int max=Arr[1].Frequency;
    int index;

    for(int i=2;i<size;i++){
        if(max<Arr[i].Frequency)
            index=i; 
    }

    int A1=Arr[index].Frequency - Arr[index-1].Frequency;
    int A2=Arr[index].Frequency - Arr[index+1].Frequency;
    float mode=Arr[index].Min + (((A1)/(A1+A2)))*C;
    
    return mode;
}

// Function to calculate standard deviation
float calculate_std_deviation(struct Table Arr[], int NoClass, int ClassInterval) {
    
    float Fi_Di2=0;
    float FiDi=0;
    for(int i=1;i<NoClass;i++){
        Fi_Di2+=Arr[i].Frequency*pow(Arr[i].di,2);
        FiDi+=Arr[i].Frequency*Arr[i].di;
    }

    float StdDev= sqrt((Fi_Di2/12)-(pow(FiDi/12,2)))*ClassInterval;

    return StdDev;
}

float Calculate_MeanDeviation(struct Table Arr[],int NoClass,float Mean){

    float Sum=0.0;
    for(int i=1;i<NoClass;i++){

        float XiX=Arr[i].Mid-Mean;
        if(XiX<0)
            XiX=-(XiX);

        Sum=Sum+(Arr[i].Frequency*XiX);
    }

    return (Sum/12);
}

// Function to sort array
void sort_array(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    

    int NoClasses_Micro = 0; 
    int ClassInterval_Micro = 0;

    int NoClasses_Apple = 0; 
    int ClassInterval_Apple = 0;

    int microsoft[SIZE_MICROSOFT] = {320, 322, 325, 330, 340, 346, 345, 346, 343, 348, 350, 335};
    int apple[SIZE_APPLE] = {300, 320, 320, 310, 325, 315, 330, 320, 328, 330, 305, 324};

    // Sort arrays for median calculation
    sort_array(microsoft, SIZE_MICROSOFT);
    sort_array(apple, SIZE_APPLE);

    // Calculate class intervals and number of classes for both datasets
    ClassInterval(microsoft, SIZE_MICROSOFT, &NoClasses_Micro, &ClassInterval_Micro);
    ClassInterval(apple, SIZE_APPLE, &NoClasses_Apple, &ClassInterval_Apple);

    struct Table Microsoft[NoClasses_Micro+1];
    struct Table Apple[NoClasses_Apple+1];
    

    // Count frequency of classes
    FrequencyCount(microsoft, Microsoft, ClassInterval_Micro, NoClasses_Micro);
    FrequencyCount(apple, Apple, ClassInterval_Apple, NoClasses_Apple);

    //Call Di
    Find_Di(Microsoft,NoClasses_Micro,ClassInterval_Micro);
    Find_Di(Apple,NoClasses_Apple,ClassInterval_Apple);

    // Print frequency results for Microsoft

    printf("Frequency for Microsoft:\n");
    printf("Class <> Xi <> Fi <> Fc <> di \n");
    for (int i = 1; i <= NoClasses_Micro; i++) { // Use NoClasses_Micro instead of SIZE
        printf("Class %d - %d : %0.2f %d %d %d\n", Microsoft[i].Min,Microsoft[i].Max,Microsoft[i].Mid, Microsoft[i].Frequency,Microsoft[i].CumilitiveFrequency,Microsoft[i].di);
    }

    // Print frequency results for Apple
    printf("\nFrequency for Apple:\n");
    printf("Class <> Xi <> Fi <> Fc <> di \n");
    for (int i = 1; i <=NoClasses_Apple; i++) { // Use NoClasses_Apple
        printf("Class %d - %d : %0.2f %d %d %d\n", Apple[i].Min,Apple[i].Max, Apple[i].Mid, Apple[i].Frequency,Apple[i].CumilitiveFrequency,Apple[i].di);
    }

    
    // Microsoft calculations
    
    float median_microsoft = calculate_median(Microsoft,NoClasses_Micro+1,ClassInterval_Micro );
    float mode_microsoft = calculate_mode(Microsoft, NoClasses_Micro+1,ClassInterval_Micro);
    float mean_microsoft = calculate_mean(mode_microsoft, median_microsoft);
    float std_dev_microsoft = calculate_std_deviation(Microsoft, NoClasses_Micro+1, ClassInterval_Micro);
    float Mean_Dev_Microsoft= Calculate_MeanDeviation(Microsoft,NoClasses_Micro+1,mean_microsoft);
    // Apple calculations
    
    float median_apple = calculate_median(Apple, NoClasses_Apple+1,ClassInterval_Apple);
    float mode_apple = calculate_mode(Apple, NoClasses_Apple+1,ClassInterval_Apple);
    float mean_apple = calculate_mean(mode_apple, median_apple);
    float std_dev_apple = calculate_std_deviation(Apple, NoClasses_Apple, ClassInterval_Apple);
    float Mean_Dev_Apple= Calculate_MeanDeviation(Apple,NoClasses_Apple+1,mean_apple);


    


    // Display results

    printf("\n <==For Microsoft Corporation ==> \n"
    "Mean = %.2f, Median = %.2f, Mode = %0.2f, Standard Deviation = %.2f , Mean Deviation = %.2f\n", mean_microsoft, median_microsoft, mode_microsoft, std_dev_microsoft,Mean_Dev_Microsoft);
    printf("<==For Apple Inc ==> \n"
    "Mean = %.2f, Median = %.2f, Mode = %0.2f, Standard Deviation = %.2f , Mean Deviation = %.2f\n", mean_apple, median_apple, mode_apple, std_dev_apple,Mean_Dev_Apple);
    
    return 0;
}