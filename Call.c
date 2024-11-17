#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun( int x , int *y)
{
    x *= 10; 
    *y *= 10;
    printf("%d %d \n", x, *y);
}

int main() 
{
    int a = 10 , b = 20;

    fun (a, &b);

    printf("%d %d \n", a,b);
     
    return 0;
}
