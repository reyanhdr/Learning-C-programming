#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s1[1001],s2[1001];
    scanf("%s %s",s1,s2);

    int l1 = strlen(s1);
    int l2 = strlen(s2);

    if (l1 != l2){
        printf("NO");
        return 0;

    }

    int f1[100] = {0};
    int f2[100] = {0};

    for (int i = 0; i < l1; i++){
        f1[s1[i]-'a'] += 1;
        f2[s2[i]-'a'] += 1;
    }

   

    for (int i = 0; i < 100; i++){

        if ( f1[i] != f2[i]){
            printf("NO");
            return 0;
        }
        
    }
    printf("YES");



     
    return 0;
}
