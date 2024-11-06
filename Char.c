#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    
   if ('a' <= ch && ch <= 'z'){
    // lowercase
    ch = ch - 32;
   }
   else 
   //upper case
   ch = ch + 32;
   printf("%c \n",ch);


    return 0;
}