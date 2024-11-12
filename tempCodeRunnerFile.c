#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{  
   int n;
   scanf("%d",&n);

   int a[n+1];

   for (int i = 0; i < n; i++){

    scanf("%d",&a[i]);

   }

   int count = 1;
   
   
   for (int i = 0; i < n; i++)
   {
    int f = 1;

    for (int j = 0; j < n; j++)
    {
        if (i != j && a[i] == a[j]){
            f = 0;
            break;
        }
    }

    if (f == 0 ){
        count++;
    }
   }

   printf("%d \n",count);









    return 0;

}