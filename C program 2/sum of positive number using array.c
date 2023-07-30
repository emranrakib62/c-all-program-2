#include<stdio.h>
main()
{

    int a[5]={-8,-6,8,5,-7},i,s=0;
    for(i=0;i<5;i++){
        if(a[i]>0){
                s=s+a[i];
            printf("%d\n",s);
        }
    }




}
