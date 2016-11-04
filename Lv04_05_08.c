#include <stdio.h>
#include <math.h>
void main ()
{
   int i,n;
   float s;
   printf("nhap n= ");
   scanf("%d",&n);
   s=0;
   for (i=1;i<=n;i++) s+=(float)1/i;
   printf("\n tong = %0.3f",s);

}

