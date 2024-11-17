#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int N,T;
scanf("%d %d",&N,&T);
int booksTime[N];
for(int i=0;i<N;i++){
    scanf("%d",&booksTime[i]);
}

int time=0,count=0;
for(int i=0;i<N;i++){
    time=time+booksTime[i];
    if(time>T)
        break;
    count++;
}
printf("%d",count);


    return 0;
}
