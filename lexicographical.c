#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char a[1000] ;
char b[1000] ;
char c[1000] ;
scanf("%s %s %s",a,b,c);
int cmp = strcmp (a,b);
int cmp1 = strcmp (b,c);

if(cmp<=0 && cmp1<=0){
    if (cmp<=0 && cmp1 >= 0){
         printf("%s\n%s",a,b);
         
   }
   else 
   printf("%s\n%s",a,c);
  
    
}
else if(cmp>=0 && cmp1 <= 0){

   if (cmp>=0 && cmp1 >= 0){
    printf("%s\n%s",b,a);
}
   else 
     printf("%s\n%s",b,c);

}
else if (cmp>=0 && cmp1 >= 0){
    printf("%s\n%s",c,a);
}
else 
   printf("%s\n%s",c,b);
  

    return 0;
}
