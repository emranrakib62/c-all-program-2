#include<stdio.h>
int main()
{
    int a,b,c,s;
    printf("enter the three angle:");
    scanf("%d%d%d",&a,&c,&b);
    s=(a+b+c);
    if(s==180&&a>0&&b>0&&c>0){
        printf("triangle is valid");
    }else{
    printf(" triangle not valid");
    }
    return 0;

}
