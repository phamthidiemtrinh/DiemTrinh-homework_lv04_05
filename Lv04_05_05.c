#include <stdio.h>
#include <math.h>
void main ()
{
    // 1
    int a[100],i,*p,n,j,s;
    p=a;
    scanf("%d",&n);
    for (i=0;i<n;i++)
         scanf ("%d",(p+i));
    printf("Day ban dau:  ");
     for (i=0;i<n;i++)
        printf("%d   ",*(p+i));
    printf("\n");
    s=0;
       for (i=0;i<n;i++) s+=*(p+i);
        printf("tong = %d   ",s);
}
