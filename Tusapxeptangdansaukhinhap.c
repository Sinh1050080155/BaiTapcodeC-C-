#include<stdio.h>
#include<conio.h>
const int MAX_SIZE = 100;
int nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("Phan tu thu: a[%d]",i);
        scanf("%5d",&a[i]);
    }
}
void xuatmang(int a[],int n)
{
    int x;
    printf("\nMang sap xep tang dan:\n");
    for (int i = 0; i < n; i++) 
        for(int j = i +1 ;j < n;j++)
        {
            if(a[i]> a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    for(int i = 0; i < n; i++)
    {
        printf(" %5d",a[i]);
    }
}
int main()
{
    int n, a[MAX_SIZE];
    printf("Nhap so n: ");
    scanf("%d",&n);
    nhapmang(a,n);
    xuatmang(a,n);
}