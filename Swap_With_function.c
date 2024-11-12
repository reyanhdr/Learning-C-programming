#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap (int *a, int *b) // copy of main a,b
{
    int temp = *a;
    *a =*b;
    *b = temp;
}

int main() 
{
    int a = 5, b =6;
    swap (&a,&b);
    printf("%d %d \n", a,b);
     
    return 0;
}
