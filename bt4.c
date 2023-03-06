/*
    Tính S(n) = 1^2 + 2^2 + … + n^2
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int tong(int n) 
{
        if(n == 0)
        {
            return 0;
        }
        return tong(n-1)+pow(n,2);   
}
int main()
{
    int n;
    printf("Nhap n: " );
    scanf("%d",&n);

    int s= tong(n);
    printf("Tong = %d",s);
}
