#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{  
    int n;
    scanf("%d",&n);

    int a[n+5];

    for (int i = 0; i < n; i++){

        scanf("%d",&a[i]);int a, b;
scanf("%d %d",&a,&b);

    }
  // memory space nilam besi 
  
    int f[100000]={0};
    for (int i = 0; i<n; i++){

        f[a[i]]=1;
    }

    for (int i = 0; i<10; i++){

        printf("%d %d \n",i,f[i]);
    }
    
    // printf("%d",f[2]);

    //  ache or nai check 
    int m;
    scanf("%d",&m);\

    for (int i = 0; i < n; i++){

        int x;
        scanf("%d",&x);
        printf("%d ",x);
        if (f[x] == 1){
            printf("ache \n");
        }
        else 
        printf("nai \n");
    }


   
    return 0;

}