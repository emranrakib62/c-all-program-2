#include<stdio.h>
int main()
{
    int  w;
    printf("enter the week number:");
    scanf("%d",&w);
    if(w==1){
        printf("saturday");
    }
     else if(w==2){
        printf("sunday");
    }
    else if(w==3){
        printf("monday");
    }
    else if(w==4){
        printf("'tuesday");
    }
    else if(w==5){
        printf("wednesday");

    }
    else if(w==6){
        printf("thursday");
    }
    else if(w==7){
        printf("friday");
    }
    return 0;
}
