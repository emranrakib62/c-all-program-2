#include<stdio.h>
#include<string.h>
int main()
{
    char name1[50] ,name2[50];
    printf("enter the string:");
    scanf("%s",name1);
    strcpy(name2,name1);

   printf("the copy is: %s\n",(name2));
    return 0;
}






