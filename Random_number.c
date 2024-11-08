#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main()
{  
    srand(time(NULL));

    int number=rand()%10;

    printf("%d",number);

    return 0;

}