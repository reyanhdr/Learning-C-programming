#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s1[99],s2[99],s3[99];
    scanf("%s %s %s",s1,s2,s3);

    int length = strlen (s1);
    int count = 0;

    for (int i = 0 ; i < length; i++){
        if (s1[i] == s2[i] && s1[i] == s3[i]){
            continue;
        }
        else if (s1[i] == s2[i] || s1[i] == s3[i] || s2[i] == s3[i]){
            count++;
        }
        else {
            count += 2;
        }
    
    }
    printf("%d",count);

     
    return 0;
}
