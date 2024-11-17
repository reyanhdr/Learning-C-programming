#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a[100000], sum;

void goToIndex(int i , int n)
{
    if (i == n){
        return;
    }

    sum += a[i];

    goToIndex( i + 1 , n);
}

int main() 
{
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
     
     sum = 0;

     goToIndex(0,n);

     printf("%d \n", sum);


    return 0;
}
