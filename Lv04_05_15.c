#include <stdio.h>
void main ()

{
    // tron day giam
   int i,j,m,n,t,a[100],b[100];
    printf("nhap so phan tu day 1= ");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;i++)
    {    printf("phan tu thu %d= ",i);
         scanf ("%d",&a[i]);
    }
    printf("\nDay ban dau:  ");
     for (i=0;i<n;i++)
        printf("%d   ",a[i]);
    for (i=0;i<n-1;i++)
         for (j=i+1;j<n;j++)
         {
             if (a[i]< a[j])
             {
                 t=a[i];
                 a[i]=a[j];
                 a[j]=t;
             }
         }
    printf("\n");
    printf("nhap so phan tu day 2= ");
    scanf("%d",&m);
    printf("\n");
    for (i=0;i<m;i++)
    {    printf("phan tu thu %d= ",i);
         scanf ("%d",&b[i]);
    }
    printf("\nDay ban dau:  ");
     for (i=0;i<m;i++)
        printf("%d   ",b[i]);
    printf("\n");
    for (i=0;i<m-1;i++)
         for (j=i+1;j<m;j++)
         {
             if (b[i]< b[j])
             {
                 t=b[i];
                 b[i]=b[j];
                 b[j]=t;
             }
         }
  printf(" day da sap xep\n");
  i=0;j=0;
     while (i!=n&&j!=m)
     {
         if (a[i]>b[j])
         {
             printf("%d  ",a[i]);
             i++;
         }
         else if (a[i]<b[j])
         {
             printf("%d  ",b[j]);
             j++;
         }
         else
         {
             printf("%d   %d   ",a[i],a[i]);
             i++;j++;
         }

     }
     if  (i!=n)
         for (i=i;i<n;i++) printf("%d  ",a[i]);
     if (j!=m)
        for (j=j;j<m;j++)  printf("%d  ",b[j]);
}



