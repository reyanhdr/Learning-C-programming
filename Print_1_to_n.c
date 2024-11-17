#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun2()
{
    printf("Inside function2 \n\n");
}

void fun1()
{
    printf("Before function call (inside function1) \n\n");

    fun2();
    
    printf("After function call (inside function1) \n\n");
}

int main() 
{
    printf("Before function call in main \n\n");

    fun1();

    printf("After function call in main \n\n");
     
    return 0;
}
