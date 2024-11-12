#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// void distribute (int roll , int  x)
// {
//     if (roll == 4){
//         return;
//     }
 
//     printf("Roll %d Received 1 chocolate \n",roll);

//     distribute(roll + 1 , x-1);


// }
void fun ( int x,int n)
{
    if (x > n){

        return;
    }
    printf("%d \n",x);

    // printf("Before function call , current x = %d \n", x);

    fun (x+1,n);

    // printf("After function call , current x = %d \n", x);
}

int main() 
{
    // printf("Before function call in main \n");
    
    fun(1,6);

    // printf("After function call in main \n");
     
    return 0;
}


// print 1 to N