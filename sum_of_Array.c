#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fun ( int x[], int n)
{
    int sum = 0;
    
    for (int i = 0; i < n; i++){
        sum += x[i];
    }
    return sum;
}


int main() 
{
    int a[5] = {1 ,3 , 5 , 7, 9};

    int result = fun(a,5);

    printf("%d",result);
     
    return 0;
}
