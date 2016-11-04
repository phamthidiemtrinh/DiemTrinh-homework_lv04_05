#include <stdio.h>
#include <math.h>
void main ()
{
    // Con tro
    int a[100],i,j,n,*p;
    p=a;
    scanf("%d",&n);
    for (i=0;i<n;i++)
         scanf ("%d",(p+i));
    printf("Day ban dau:  ");
     for (i=0;i<n;i++)
        printf("%d   ",*(p+i));
    printf("\n");
   // Thong thuong
    printf("Cach 2\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
         scanf ("%d",&a[i]);
    printf("Day ban dau:  ");
     for (i=0;i<n;i++)
        printf("%d   ",a[i]);
    printf("\n");
}

