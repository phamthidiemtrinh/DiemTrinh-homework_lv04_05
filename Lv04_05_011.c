#include <stdio.h>
void main ()
{
   int i,min,max,n,a[100];
    printf("nhap so phan tu day = ");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;i++)
    {    printf("phan tu thu %d= ",i);
         scanf ("%d",&a[i]);
    }
    min=0;max=0;
    printf("\nDay ban dau:  ");
     for (i=0;i<n;i++)
        printf("%d   ",a[i]);
       for (i=0;i<n;i++)
    {
        if (a[i]>max)
            max=a[i];
        if (a[i]<min)
            min=a[i];

    }
    printf("\n min=%d",min);
    printf("\n max=%d",max);
}



