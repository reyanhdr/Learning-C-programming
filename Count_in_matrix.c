#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{  
   int n,m,x;

   scanf("%d %d %d",&n,&m,&x);

   int a[n+1][m+1];

   for ( int i = 0; i < n; i++ ){
    for (int j = 0; j < m; j++){

        scanf("%d", &a[i][j]);
    }
   }

   
   int b[x+1];
   for (int i = 0; i < x; i++){

    scanf("%d",&b[i]);
   }
   
   

   for ( int i = 0; i<x; i++)
   {
    int count = 0; 
    for  ( int j = 0 ; j < n; j++)
    {
        for ( int k = 0 ; k < m; k++){
            if ( a[j][k] == b[i]){
                count++;
            }
        }

    }
    printf("%d \n",count);
   }


    return 0;

}