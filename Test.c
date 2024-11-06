#include <stdio.h>
#include <math.h>

int main()
{   int evenCount=0,oddCount=0,positiveCount=0,negativeCount=0;
    int n;
    scanf("%d",&n);
    
    for (int j = 0; j<=n;j++)
    {
        int x;
        scanf("%d",&x);
        if(x % 2 == 0)
        {
            //even
            evenCount++;
        }
        else 
        {
            //odd
            oddCount++;
        }
      if(x > 0)
      {
        //positive
       positiveCount++;
      }
      else if (x<0)
      {
        //negative
        negativeCount++;
      }
    }
    printf("Even: %d \n",evenCount);
    printf("Odd: %d \n",oddCount);
    printf("Positive: %d \n",positiveCount);
    printf("Negative: %d \n",negativeCount);
   
    return 0;

}