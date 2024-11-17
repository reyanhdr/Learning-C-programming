#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t;
    scanf("%d",&t);

    while (t--){
        long long int m,a,b,c;

        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);

        long long int x= a*b*c;
        long long int y = m/x;

        if (m%x != 0){
            printf("-1\n");
        }
        else if ( y == 0){
            printf("0\n");
        }
        else 
        printf("%lld\n",y);
    }
     
    return 0;
}
