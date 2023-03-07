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
int lietkesochan(int a[],int n)
{
    printf("\nXuat so chan trong mang:\n");
    for(int i = 0; i<n; i++)
       {
            if(a[i]%2==0)
            {
               printf("%5d ",a[i]);
            }
        }  
}
int main()
{
    int n, a[MAX_SIZE];
    printf("Nhap so n: ");
    scanf("%d", &n);
    nhapmang(a, n);
    xuatmang(a, n);
    lietkesochan(a, n);
}