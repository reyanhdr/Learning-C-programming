#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printDigits(int n){
    if (n == 0){
        return;
    }
    int digit = n%10;
    printf("%d ", digit);
    printDigits(n/10);
}

int main() 
{
    int t ;
    scanf("%d",&t);

    for (int i = 0; i < t; i++){
        int n;
        scanf("%d ",&n);
        printDigits(n);
        printf("\n");
    }
     
    return 0;
}
