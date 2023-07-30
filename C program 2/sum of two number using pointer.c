#include<stdio.h>
int main()
{
   int x=20,y=30,*p1,*p2;
   int sum;
   p1=&x;
   p2=&y;
   sum=*p1+*p2;
   printf("%d\n",sum);








    return 0;
}
