#include<stdio.h>
int main()
{
 int a,b,c,s;
 printf("enter three angle: ");
 scanf("%d%d%d",&a,&b,&c);
 s=a+b+c;
 if(s==180&&a>0&&b>0&&c>0){
    printf("valid");


 }   else{

 printf("invalid");
 }



}
