#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{  
   int arr[5] = {1 , 2 , 3, 4 ,5};
   int *p = arr;

   printf("%d %d \n",&arr[0],p);
   printf("%d",*p+4);



    return 0;

}