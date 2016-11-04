#include <stdio.h>
void main ()

{
   int i,j,t,n,d,a[100],b[100];
    printf("nhap so phan tu day = ");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;i++)
    {    printf("phan tu thu %d= ",i);
         scanf ("%d",&a[i]);
    }
    printf("\nDay ban dau:  ");
     for (i=0;i<n;i++)
        printf("%d   ",a[i]);
    d=0;;
    for(i=0;i<n;i++)
           if (a[i]>0)
    {
        b[d]=a[i];
        d++;
    }
    printf("\n xoa so am va sap xep \n");
    for (i=0;i<d-1;i++)
        for (j=i+1;j<d;j++)
          if (b[i]>b[j])
    {
        t=b[i];
        b[i]=b[j];
        b[j]=t;
    }
      for (i=0;i<d;i++)
          printf("%d  ",b[i]);

}



