#include <stdio.h>
#include <math.h>
void main ()
{
    int a,b,c,t;
    printf("nhap 2 so a,b \n");
    scanf ("%d%d",&a,&b);
    t=a*b;
     while (c!=0)
    {
        c=a%b;
        a=b;
        b=c;

     }
     printf("UCLN=%d",a);
     printf("\nBCNN=%d",t/a);
}
