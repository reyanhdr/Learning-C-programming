#include<stdio.h>
#include<math.h>
int main()
{

    int t;
    scanf("%d",&t);

    for (int cs = 0; cs < t;cs++){

       int x,y;
       scanf("%d %d ",&x,&y);
       if (x>y){
        int temp = x;
        x=y;
        y=temp;
       }

       int sum =0;

       for (int i = x+1;i < y ; i++) {

        if (i % 2 !=0){
            // odd
            sum += i;
        }
       }
       printf("%d\n",sum);
    }

    return 0;
}