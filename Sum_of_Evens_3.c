#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int sum = 0;

    for (int i = 2 ; i <= n; i = i+2){
       if(i%2 == 0){
        sum +=i;
       }
        
    }
    printf("%d",sum);
     
    return 0;
}
