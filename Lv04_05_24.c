#include <stdio.h>
void main ()
{
    // Con tro
    int a[100],i,n,*p;
    p=a;
    printf("nhap n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
         scanf ("%d",(p+i));
    printf("\n Day ban dau:  \n");
     for (i=0;i<n;i++)
        printf("%d   ",*(p+i));
    printf("\n");

}

