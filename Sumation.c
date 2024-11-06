#include <stdio.h>
#include<math.h>
int main()
{
   long long  int N;
    long long int s;
    scanf ("%lld",&N);

    // for (int i =1;i<=N;i++){
    //  s +=i;
    // }

    s=N*(N+1)/2;
   

  printf("%lld",s);


    return 0;
}