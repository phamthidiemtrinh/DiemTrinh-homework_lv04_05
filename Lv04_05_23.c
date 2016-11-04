#include <stdio.h>
void main ()
{
    int i,a[5];
    printf("nhap  5 so  ");
    for (i=0;i<5;i++)
    {
        printf("\n so %d=",i);
         scanf ("%d",&a[i]);
    }
    printf("\n Day 5 so:  ");
     for (i=0;i<5;i++)
        printf("%d   ",a[i]);
    printf("\n");
}

