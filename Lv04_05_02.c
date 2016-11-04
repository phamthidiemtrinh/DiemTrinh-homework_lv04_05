#include <stdio.h>
#include <math.h>
void main ()
{
    int a[100],i,j,n,*p,max;
    p=a;
    printf("nhap n\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
         scanf ("%d",(p+i));
    max=a[0];
    printf("so lon nhat: :  ");
     for (i=0;i<n;i++)
     if (*(p+i)>max) max=*(p+i);
        printf("Max= %d   ",max);


}

