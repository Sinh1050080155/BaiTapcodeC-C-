/*
    2.9.  Viết hàm đệ quy tính tổng của biểu thức sau đây: S(x, n) = x + x^2/2! + x^3/3! + … + x^n/n!
*/
#include<stdio.h>
#include<math.h>

int giaithua(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return giaithua(n-1) * n;
}

float tinhtong(int x, int n)
{
    if( n == 0)
    {
        return 1;
    }
    float S = tinhtong(x, n-1);
    float bp = pow(x, n);
    float gt = giaithua(n);
    return S + bp/gt;
}
int main()
{
    int x,n;
    printf("Nhap so x: ");
    scanf("%d",&x);
    printf("Nhap so n: ");
    scanf("%d",&n);
    float kq = tinhtong(x,n);
    printf("Tinh tong S(x, n): %f",kq);
}