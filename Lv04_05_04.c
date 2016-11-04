#include <stdio.h>
#include <math.h>
void main ()
{
    // 1
    int a[100],i,*p
    ,n,j;
    p=a;
    scanf("%d",&n);
  a[0] =1;
   a[1]=1;
   for (i=2;i<n;i++)
      *(p+i)=*(p+i-1)+*(p+i-2);
for (i=0;i<n;i++)
    printf("%d   ",*(p+i));
}
