#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int add ()
{   
   int a, b;
scanf("%d %d",&a,&b);

 printf("Function called \n");

    int sum = a + b;

    return sum;
}
// PI 3.14159

double getPi (){
    return 3.14159;
}


int main() 
{

printf("Before \n");

 
 printf("%d \n",add());

 printf("%d \n",add());
 printf("After \n");


printf("%lf \n", getPi());

    return 0;
}
