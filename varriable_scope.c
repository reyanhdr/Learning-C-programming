#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a,b;

int add ()
{
    // int a = 6, b= 5;
    // int temp = a;
    // a = b;
    // b = temp;
}

int main() 
{
    // int a = 5, b = 6; 
    printf("%p %p \n",&a,&b);

    add();
    
    printf("%d %d",a,b);
     
    return 0;
}
