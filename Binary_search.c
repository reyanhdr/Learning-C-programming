#include <stdio.h>
#include<math.h>

int main()
{
    int  n, data;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n;i++){
        scnaf("%d",&a[i]);
    }
    
    scanf("%d",&data);

int l = 0,r = n-1 ,mid;
while (l <= r){
    int mid = (l+r)/2;
    if ( data ==  a[mid]){
        return mid;

    }
    else if ( data > a[mid]){
        l=mid+1;
    }
    else 
    r= mid -1;
}
printf("%d",data);

    return 0;
}