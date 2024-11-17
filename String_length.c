#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

void makefirstcharupper(char x[]){
    x[0] = toupper(x[0]);
    printf("%s",x);
}

void length(char x[])
{
    int n = strlen (x);
    printf("%d \n",n);
}

int main() 
{
    char a[20] = "programming";
    length(a);
    makefirstcharupper(a);
     
    return 0;
}
