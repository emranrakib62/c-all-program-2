#include<stdio.h>
#include<string.h>
int main()
{
    char name1[50],name2[20];
    printf("enter the 1st string:");
    scanf("%s",name1);
    printf("enter the 2nd string:");
    scanf("%s",name2);
    if(strcmp(name1,name2)==0)
    {
        printf("both string are same\n");
    }
    else{
        printf("both string are not same\n");
    }
    return 0;
}
