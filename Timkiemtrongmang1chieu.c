#include<stdio.h>
#include<conio.h>
const int MAX_SIZE = 100;
int nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Phan tu thu a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
int xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d",a[i]);
    }
}
void TimX(int a[], int n)
{
    int x;
    printf("\nNhap gia tri x can tim:");
    scanf("%d", &x);
    printf("Vi tri cua x trong mang la: \n");
    for(int i = 0; i<n; i++)
    {
        if(a[i]==x)
        {
            printf(" %d \t",i);
        }
    }
}
int main()
{
    int a[MAX_SIZE];
    int n;
    printf("Nhap so n: ");
    scanf("%d",&n);
    nhapmang(a,n);
    xuatmang(a,n);
    TimX(a,n);

}