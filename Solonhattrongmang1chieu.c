#include<stdio.h>
#include<conio.h>
const int MAX_SIZE = 100;
int Nhapmang(int a[],int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
int Xuatmang(int a[],int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("%5d",a[i]);
    }
}
int timXlon(int a[],int n)
{
   int x = a[0];
    for(int i=0;i<=n;i++)
    {
        if(a[i] > x)
        {
            x = a[i];
        }
    }
    return x; 
}
int main()
{
   
    int n;
    int a[MAX_SIZE];
    printf("Nhap n:"); 
    scanf("%d",&n);
    Nhapmang(a,n);
    Xuatmang(a,n);
    printf("\nPhan tu lon nhat trong mang: %d",timXlon(a,n));
    
}