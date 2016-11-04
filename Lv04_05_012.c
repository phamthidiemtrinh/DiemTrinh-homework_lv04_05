#include <stdio.h>
void main ()
{
   int i,min,max,n,a[100],j,t;
    printf("nhap so phan tu day = ");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;i++)
    {    printf("phan tu thu %d= ",i);
         scanf ("%d",&a[i]);
    }
    min=0;max=0;
      printf("\nxap xep day \n");
    for (i=0;i<n-1;i++)
         for (j=i+1;j<n;j++)
         {
             if (a[i]> a[j])
             {
                 t=a[i];
                 a[i]=a[j];
                 a[j]=t;
             }
         }
    for (i=0;i<n;i++)
        printf("%d   ",a[i]);
printf("\n");
}



