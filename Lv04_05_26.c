#include <stdio.h>
void main ()
{

    int a[4][5],i,j;
    printf("nhap cac phan tu\n");
    for (i=0;i<4;i++)
        for (j=0;j<5;j++)
         scanf ("%d",&a[i][j]);
    printf("\n ma tran ban dau:  \n");
     for (i=0;i<4;i++)
     {  for (j=0;j<5;j++)
           printf("%3d",a[i][j]);
       printf("\n");
     }
      printf("\n ma tran chuyen vi:  \n");
     for (i=0;i<4;i++)
     {  for (j=0;j<5;j++)
           printf("%3d",a[j][i]);
       printf("\n");
     }

}

