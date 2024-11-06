#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a[100005];

int main() 
{
    int n ;
    scanf("%d",&n);

    for ( int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0, j = n - 1; i <= j; i++, j--){
        int temp = a[i];
        
        a[i] = a[j];

        a[j] = temp;
    }
    for ( int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }


    printf("\n");

    

  

    return 0;
}
