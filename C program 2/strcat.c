#include<stdio.h>
#include<string.h>
int main()
{
    char name1[50],name2[20];
    printf("enter the 1st string:");
    scanf("%s",name1);
    printf("enter the 2nd string:");
    scanf("%s",name2);
    strcat(name1, name2);
    printf("merge of the string: %s ", name1);
    return 0;



}
