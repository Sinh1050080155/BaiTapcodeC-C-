/*
    2.4.  Cho mảng 1 chiều các số thực. Viết hàm đếm số lượng giá trị dương trong mảng bằng 
*/
#include<stdio.h>
#include<conio.h>
const int MAX_SIZE = 100;

float nhapmang(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu a[%d]: ", i);
        scanf("%f",&a[i]);
    }
}
float xuatmang( float a[], int n)
{
  
    for(int i = 0; i < n; i++)
    {
        printf("%0.3f\t", a[i]);
    }
}
int  demduong(float a[],int n)
{
    if(n == 0)
    {
        return 0;
    }
    int D = demduong(a, n -1);
    if( a[n-1] > 0)
    {
        D++;
    }
    return D;
}
int main()
{
    int n;
   float a[MAX_SIZE];
    printf("Nhap so Phan Tu: ");
    scanf("%d",&n);
    nhapmang(a,n);
    printf("Mang sau khi nhap: \n");
    xuatmang(a,n);
    int dd = demduong(a,n);
    printf("\nDem gia tri duong trong mang: %d",dd);

    
}