#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n;
scanf("%d",&n);

int exp[n];

for(int i=0;i<n;i++){
    scanf("%d",&exp[i]);
}

for (int i = 0; i < n;i++){
  
   if(exp[i]<1){
    printf("Entry-level candidate\n");
   }
   else if (exp[i]>=1 && exp[i]<=3){
    printf("Junior candidate\n");
   }
   else if(exp[i]>=4 && exp[i]<=7){
    printf("Mid-level candidate\n");
   }
   else 
       printf("Senior candidate\n");
   
}


    return 0;
}
