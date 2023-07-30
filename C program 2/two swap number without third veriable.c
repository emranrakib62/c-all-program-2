#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the number of x & y:");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("the swap number is x & y:%d %d\n",x,y);
    return 0;
}
