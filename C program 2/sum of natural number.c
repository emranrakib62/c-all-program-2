

#include<stdio.h>
int main()
{

    int n,i,s=0;
    printf("enter the start number:");
    scanf("%d",&n);
printf("1+2+3+...+%n=",n);
    for(i=1;i<=n;i++){
            s=s+i;
        printf("%d\n",s);

    }


    return 0;
}
