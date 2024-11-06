#include<stdio.h>
int main()
{
    // for (int i = 100; i<= 300;i++)
    // {
    //     printf("Cheaking %d \n",i);
    //     if (i % 2 == 0 && i%3 ==0 && i % 5==0)
    //     {
    //         printf("%d is the number \n",i);
    //         break;
    //     }
    // }
    for (int i = 0;i < 10; i++)
    {   printf("%d \n",i);
        printf("Line 1 \n");
         printf("Line 2 \n");
         if (i == 5)
         {
            break; 
         }
         printf("Line 3 \n");
         printf("Line 4 \n");

    }
}