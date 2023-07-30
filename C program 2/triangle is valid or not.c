#include<stdio.h>
int main()
{
    int a ,b,c,sum;
printf("enter the three side:");
    scanf("%d%d%%d\n",&a,&b,&c);

    if((a+b)>c){
        printf("this triangle is valid");
    }else{
    printf("this is not valid");

    }
    return 0;
}
