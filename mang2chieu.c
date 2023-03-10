/* mảng 2 chiều */
#include<stdio.h>
#include<conio.h>
const int MAX_SIZE = 100;
void nhapmang(int a[][MAX_SIZE], int x, int y)
{
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            printf("Nhap ptu thu [%d][%d] ",i,j);
            scanf("%5d",&a[i][j]);
        }
    }
}
void xuatmang(int a[][MAX_SIZE], int x, int y)
{
     for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            printf("%5d ",a[i][j]);
        }   
       printf("\n");
    }  
}
int main()
{
    int a[MAX_SIZE][MAX_SIZE];
    int x,y;
    printf("Nhap x:");
    scanf("%d",&x);
    printf("Nhap y:");
    scanf("%d",&y);
    nhapmang(a,x,y);
    printf("Mang 2 chieu vua nhap la:\n");
    xuatmang(a,x,y);
}