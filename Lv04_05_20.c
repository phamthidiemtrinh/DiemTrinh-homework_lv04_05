#include <stdio.h>
#include <math.h>
void main()
{
    int i,n,j,t,dem;
    printf("nhap n\n");
    scanf("%d",&n);
    dem=0;
    if (n==2) dem=1;
    if (n>=3) dem=2;
    for (i=5;i<=n;i+=2)
    { t=0;

            for (j=2;j<=(int)(sqrt(i));j++)
                if (i%j==0) t=1;
            if (t==0) dem++;


    }
    printf("\n co %d so nguyen to",dem);
}




