#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


 void swap(int *p , int *q){
  
int temp = *p;
*p = *q;
*q = temp;

   
 }

int main()
{  
   int a ,b ;
   scanf("%d %d",&a,&b);
   

   swap (&a,&b);
  
   printf("%d %d",a,b);
   


    return 0;

}