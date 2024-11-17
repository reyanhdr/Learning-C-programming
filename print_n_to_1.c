#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun (int x, int n)
{
    if (x > n ){
        return;
    }

    fun(x + 1,n);

    printf("%d \n",x);
}

int main() 
{
    fun(1,10);
     
    return 0;
}
