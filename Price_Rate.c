#include<stdio.h>
#include <math.h>
int main()
{
int lastweek_p_price;
int thatweek_p_price;
char ch='%';


printf("Write Last week Potato Price:\n");
printf("Write that week Potato Price: \n");
scanf("%d %d",&lastweek_p_price,&thatweek_p_price);

if (lastweek_p_price<thatweek_p_price)
{
    float rate =( (thatweek_p_price - lastweek_p_price)*100)/lastweek_p_price;
    printf("Price Increase rate %.2f%c ",rate,ch);
}
else if (lastweek_p_price>thatweek_p_price)
{
 float rate =( (lastweek_p_price - thatweek_p_price)*100)/thatweek_p_price;
 printf("Price decrease rate %.2f%c",rate,ch);
}
else 
printf("Last week  and That week price are same ");




return 0;
}