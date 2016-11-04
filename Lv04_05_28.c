#include <stdio.h>
void main ()
{

   int i,j,a[5][5];
   int dem=0;
   for (i=0;i<5;i++)
    for (j=0;j<5;j++)
   {
       dem++;
       a[j][i]=dem;
   }

   for (i=0;i<5;i++)
   {
       for (j=0;j<5;j++)
         printf("%d  ",a[i][j]);
       printf("\n");
   }

}

