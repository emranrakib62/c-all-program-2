#include<stdio.h>
main()
{
    int a[2][3],i,j,s=0;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<2;i++){
        for(j=0;j<3;j++){
              s=s+a[i][j];

        }

        printf("%d ",s);
    }




}
