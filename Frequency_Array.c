#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{  
   int n,m;
   scanf("%d %d",&n,&m);

   int a[n+5];
   int f[100005];
  
   for (int i = 0; i < n ; i++){

    scanf("%d",&a[i]);
    
    f[a[i]] += 1;
   }
    
   
   for (int i = 1; i <= m; i++){

     printf("%d\n",f[i]);

   }



    return 0;

}