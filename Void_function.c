#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void add ( int a , int b)
{
    printf("function called \n");
    int sum = a + b;
    
    printf("%d \n",sum);
}
void alphaCheck ( char c)
{
    if ( 'a' <= c && c <= 'z')
    {
        printf("Lower \n");
    }
    else 
    printf("Upper \n");
}

int main() 
{
    int a, b;
    scanf("%d %d",&a,&b);
    add(a,b);

    alphaCheck('F');

    alphaCheck ('f');
     
    return 0;
}
