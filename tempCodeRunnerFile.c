#include <stdio.h>
int main()
{

   int n ;
   scanf("%d",&n);

   int years,months,days,reminder1,reminder2;

   years=n/365;
   reminder1=n%365;

   months=reminder1/30;
   reminder2=reminder1%30;

   days=reminder2;

   printf("%d years\n%d months\n%d days",years,months,days);
   

    return 0;
}