#include <stdio.h>
void main()
{
    int h,c,k,n,i;
        float a[10][10],t,d,tam;
// nhap ma tran
    printf("nhap n=\n");
    scanf("%d",&n);
    for (h=0;h<n;h++)
        for (c=0;c<n;c++)
        { printf("a[%d,%d]=",h,c);
         scanf ("%f",&a[h][c]);
        }
// xuat ma tran
   printf("\n mat tran vua nhap \n");
   for (h=0; h<n; h++)
   {
       for (c=0;c<n;c++)
          printf ("%0.1f  ", a[h][c]);
       printf("\n");
   }
// chuyen mat tran thanh ma tran tam ghac
for (c=0;c<n;c++)
    for (h=c+1;h<n;h++)
      if (a[h][c]!=0)
{
     for (k=0; k<n; k++)
        if (k!=c&& a[k][c]!=0) break;
    t=-a[h][c]/a[k][c];
    for (i=0;i<n;i++)
         a[h][i]+=t*a[k][i];
}



    // xuat ma tran
   printf("\n mat tran vua nhap \n");
   for (h=0; h<n; h++)
   {
       for (c=0;c<n;c++)
          printf
           ("%0.3f  ", a[h][c]);
       printf("\n");
   }

}

