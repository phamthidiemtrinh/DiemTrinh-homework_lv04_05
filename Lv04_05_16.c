#include <stdio.h>
void main ()

{
   int i,k,n,d,a[100],b[100];
    printf("nhap so phan tu day = ");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;i++)
    {    printf("phan tu thu %d= ",i);
         scanf ("%d",&a[i]);
    }
    printf(" nhap so k ");
    scanf("%d",&k);
    printf("\nDay ban dau:  ");
     for (i=0;i<n;i++)
        printf("%d   ",a[i]);
    d=0;;
    for(i=0;i<n;i++)
           if (a[i]!=k)
    {
        b[d]=a[i];
        d++;
    }
    printf("\n day da xoa phan tu =%d\n",k);
    for (i=0;i<d;i++)
          printf("%d  ",b[i]);

}



