#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{  
   int n ,m;
   scanf("%d %d",&n , &m);

   int a[n+5][m+5];

   for (int i = 0 ; i < n; i++){

    for ( int j = 0 ; j < m; j++){

        scanf("%d",&a[i][j]);

    }
   }

   int element = 1;
   int flag = 1;

    for (int i = 0 ; i < n; i++){

    for ( int j = 0 ; j < m; j++){

        if (i == j && (i+j) == n-1 ){

            if (a[i][j] != element){
                flag = 0;
                break;
            }
        }
        else {

            if (a[i][j] != 0){
                flag = 0;
                break;
            }
        }

    
    }
    if (flag == 0){
        break;
    }
   }

    if (flag == 1) {
      printf("Scaler");

    }
    else 
    printf("Not scaler");

    return 0;

}

// Diagonal
// Same Diagonal Elements 
// All other values are same
