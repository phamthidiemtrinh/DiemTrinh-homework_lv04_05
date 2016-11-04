#include <stdio.h>
#include <math.h>
void main ()
{
    // 1
    int a[100],i,*p,n,j,t;
    p=a;
    scanf("%d",&n);
    for (i=0;i<n;i++)
         scanf ("%d",(p+i));
    printf("Day ban dau:  ");
     for (i=0;i<n;i++)
        printf("%d   ",*(p+i));
    printf("\n");
    printf("xap xep day \n");
    for (i=0;i<n-1;i++)
         for (j=i+1;j<n;j++)
         {
             if (*(p+i)> *(p+j))
             {
                 t=*(p+i);
                 *(p+i)=*(p+j);
                 *(p+j)=t;
             }
         }
    for (i=0;i<n;i++)
        printf("%d   ",*(p+i));
}
