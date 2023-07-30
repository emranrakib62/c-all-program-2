#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the two number:");
    scanf("%d%d",&x,&y);
    switch(x>y){
case 1 :
    printf("%d is big ",x);
    break;
default :
    printf("%d is big",y);
    break;
    }

return 0;
}

