
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("enter the number:");
    scanf("%d",&n);
    i=1;
    while(i<=n){
s=s+i*i;
        printf("%d\n",s);
i=i+2;
    }


}
