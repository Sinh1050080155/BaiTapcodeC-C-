

/*

Bài 1.2. Hãy khai báo kiểu dữ liệu biểu diễn khái niệm hỗn số trong toán học và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này

*/

#include<stdio.h>
#include<conio.h>

struct honso
{
    int TuSo, MauSo, songuyen;
};

typedef struct honso HONSO;

void Nhaphonso(HONSO&);
void Xuathonso(HONSO);

void Nhaphonso(HONSO& hs)
{
    printf("\nNhap vao tu so: ");
    scanf_s("%d", &hs.TuSo);
    
    printf("\nNhap vao so nguyen: ");
    scanf_s("%d", &hs.songuyen);


    do
    {
        printf("\nNhap vao mau so: ");
        scanf_s("%d", &hs.MauSo);

        if (hs.MauSo == 0)
        {
            printf("\nMau so phai khac 0. Xin kiem tra lai !");
        }
    } while (hs.MauSo == 0);

    
}

void Xuathonso(HONSO hs)
{
    if (hs.TuSo / hs.MauSo < 1)
    {
        printf_s("%d/%d*%d", hs.TuSo, hs.MauSo, hs.songuyen);
    }
    else {
        printf_s("Khong phai hon so");
    }
    
}
int main()
{
    HONSO hs;
    Nhaphonso(hs);
    Xuathonso(hs);



   
    return 0;
}
