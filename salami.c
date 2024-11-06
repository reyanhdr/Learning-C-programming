#include <stdio.h>

int main(){

    int N;
    scanf("%d",&N);
    int Arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&Arr[i]);
    }

    //Find Max Value
    int MAX=Arr[0];
    for(int i=1;i<N;i++){
        if(Arr[i]>MAX)
            MAX=Arr[i];
    }

    //Difference from Max
    for(int i=0;i<N;i++){
        Arr[i]=MAX-Arr[i];
    }
    
    for(int i=0;i<N;i++){
        printf("%d ",Arr[i]);
    }

    return 0;
}