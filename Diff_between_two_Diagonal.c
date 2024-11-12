#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{  
    int n;
    scanf("%d",&n);

    int a[n+5][n+5];

    for (int i =0; i< n; i++){

        for (int j = 0; j < n; j++){

            scanf("%d",&a[i][j]);
        }
    }
    
    int main_diagonal = 0, sec_diagonal = 0;

    for (int i =0; i< n; i++)
    {

        for (int j = 0; j < n; j++)
        {
           if (i == j){
            main_diagonal += a[i][j];
           }
           if (i+j == n-1){
            sec_diagonal += a[i][j];
           }
        }
    }
    
    int diff = abs(main_diagonal - sec_diagonal);

    printf("%d \n",diff);

   
    return 0;

}