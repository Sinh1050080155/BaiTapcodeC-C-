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
void sxtangdan(int a[],int n)
{
    for(int i = 0; i<n; i++)
        for(int j = i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
                
            }
            
        }
    printf("\nSap xep mang tang dan: \n");
    for(int i = 0; i <n; i++)
    {
        printf("%d \t",a[i]);
    }
}
int main()
{
    int n, a[MAX_SIZE];
    printf("Nhap so n: ");
    scanf("%d", &n);
    nhapmang(a, n);
    xuatmang(a, n);
    sxtangdan(a, n);
}