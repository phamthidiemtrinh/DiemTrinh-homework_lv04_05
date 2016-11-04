#include <stdio.h>
void main ()
{
   int i,n,a[100],b[100],c[100],am,duong;;
    printf("nhap so phan tu day = ");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;i++)
    {    printf("phan tu thu %d= ",i);
         scanf ("%d",&a[i]);
    }
    printf(" \n day ban dau \n");
    for (i=0;i<n;i++)
        printf("%d   ",a[i]);
printf("\n");
am=-1;
duong=-1;
     for (i=0;i<n;i++)
        if (a[i]>0)
     {
         duong++;
         b[duong]=a[i];
     }
       else if (a[i]<0)
       {
           am++;
           c[am]=a[i];
       }
 printf(" day duong la: ");
 for (i=0;i<=duong;i++) printf("%3d",b[i]);
 printf("\n day am la: ");
 for (i=0;i<=am;i++) printf("%3d",c[i]);
}



