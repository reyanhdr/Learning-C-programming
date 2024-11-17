#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int x, int n)
{
    if (x > n ){
        return;
    }

    fun(x+1,n);

    printf("%d ",x);
    
}

int main() 
{
    int n;
    scanf("%d", &n);

    fun(1,n);
     
    return 0;
}
