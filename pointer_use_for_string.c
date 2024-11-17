#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(char *x, int *y){

    printf("%s \n",x);

    x[0] = 'b';

    x = strcpy(x,y);
}

int main() 
{
    char a[10] = "air";
    char b[10] = "apple";

    fun(a,b);

    printf("%s \n",a);
     
    return 0;
}
