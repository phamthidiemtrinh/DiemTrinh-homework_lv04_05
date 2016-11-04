#include <stdio.h>
void main()
{
    int i,n,k;
    printf("nhap n=");
    scanf("%d",&n);
    k=0;
    for (i=1;i<=n;i++)
        if (i%2==0) k++;
        printf(" co %d so chan  ",k);
    printf("\n");

}
