#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int  add()
{
    int a , b;

    scanf("%d %d", &a,&b);

    printf("function called \n");
    
    int sum = a + b;

    printf("%d \n", sum);

    return sum;
}

void mul(int x , int y)
{

    printf("%d",x * y);
}

int main() 
{
   mul (add(),10);

     
    return 0;
}
