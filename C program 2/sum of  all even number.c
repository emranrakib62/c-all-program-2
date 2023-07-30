

#include<stdio.h>
int main()
{

   int i,n,s=0;

    printf("the last number:");
    scanf("%d",&n);

    for( i=2;i<=n;i=i+2){

    s=s+i;
printf("%d\n",s);
    }

    return 0;
}


