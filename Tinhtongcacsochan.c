#include<stdio.h>
#include<conio.h>
const int MAX_SIZE = 100;
int nhapmang(int a[],int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("Nhap phan tu thu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
int xuatmang(int a[],int n)
{
    printf("Mang 1 chieu:\n");
    for(int i = 0; i<n; i++)
    {
        printf("%5d",a[i]);
    }
}
int tongchan(int a[],int n)
{
    if(n==0)
    {
        return 0;
    }
    int tong = tongchan(a+1,n-1);
        if(a[0] % 2 == 0)
        {
           return tong + a[0];
        }
    return tong;
}
int main()
{
    int n;
    int a[MAX_SIZE];
    printf("Nhap so n:");
    scanf("%d", &n);
    nhapmang(a,n);
    xuatmang(a,n);
    int T = tongchan(a,n);
    printf("\nTinh tong chan: %d",T );
    
}