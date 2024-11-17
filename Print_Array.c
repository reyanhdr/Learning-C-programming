#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun (int *x,int n){
    for (int i = 0; i < 5; i++){
        printf("%d ",*(x+i));
    }
}


int main() 
{
    int a[5] = {1,2,3,4,5};

    fun(a,5);

    printf("\n");
    
    for (int i = 0; i< 5; i++){

        printf("%d ",a[i]);
    }
     
    return 0;
}
