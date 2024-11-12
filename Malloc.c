#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{  

  int *arr = (int *)malloc (  sizeof (int ));
   int n;
   scanf("%d",&n);
    arr[n];
   for (int i =0; i < n; i++){

    scanf("%d",&arr[i]);
   }
   
   
   for (int i = 0; i < n; i++){

    printf("%d ",arr[i]);

    
   }



   printf("\n");


    return 0;

}