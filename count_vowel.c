#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 1000

int main() 
{
    char str[MAX] ;
    int count=0;

    scanf("%s",str);


    int length=strlen(str);

    char str2[length] ;

    for(int i=0;i<length;i++){
        str2[i]=str[i];
    }

    for(int i=0;i<length;i++){
        if(str2[i]=='a' || str2[i]=='e' || str2[i]=='i' || str2[i]=='o' || str2[i]=='u'
         || str2[i]=='A' || str2[i]=='E' || str2[i]=='I' || str2[i]=='O' || str2[i]=='U')
            count++;
    }

    printf("%d",count);


     
    return 0;
}
