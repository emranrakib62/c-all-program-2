
#include<stdio.h>
void main()
{

    int last,n,s=0;
    printf("enter the number:");
    scanf("%d",&n);
    last=n%10;
   while(n>=10){
    n=n/10;
    s=n+last;
   }

printf("the  total:%d+%d=%d\n",last,n,s);


}

