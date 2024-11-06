#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n,x,y;
scanf("%d %d %d",&n,&x,&y);

int pi [n];
for (int i = 1; i <= n ;i++){
    scanf("%d",&pi[i]);
  
}
int count=0;
for (int i = 1; i <= n ;i++){
    if(pi[i]>=x && pi[i]<=y)
        count++;
  
}

printf("%d",count);


    return 0;
}
