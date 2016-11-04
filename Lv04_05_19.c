#include <stdio.h>
void main()
{
    int i,n,k;
    printf("nhap n=");
    scanf("%d",&n);
    printf("\n nhap k= ");
    scanf("%d",&k);
    printf("\n so chia het cho %d \n",k);
    for (i=0;i<=n;i++)
        if (i%k==0)
        printf("%d   ",i);
    printf("\n");

}
