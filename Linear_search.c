#include <stdio.h>
#include <math.h>
int main()
{
  int n;
  scanf("%d",&n);
  int s_data;

  int a[n+5];

  for (int i = 0; i < n; i++){

    scanf("%d",&a[i]);
  }
  scanf("%d",&s_data);

  

  int found = 0;
  for (int i = 0; i <n; i++){
    if (a[i] == s_data){
         
        printf("data found %d",a[i]);
        found++;
         break;
      
    }
    else 
    printf("data not found \n");
  
  
  }


    return 0;
}