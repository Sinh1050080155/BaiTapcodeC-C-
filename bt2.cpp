/*
    bai 1.26.   Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một mặt hàng (MATHANG). Biết rằng một mặt hàng gồm những thành phần sau:
                Tên mặt hàng: chuỗi tối đa 20 ký tự
                Đơn giá: kiểu số nguyên 4 byte
                Số lượng tồn: kiểu số nguyên 4 byte
                Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
*/

#include<stdio.h>
#include<conio.h>

typedef struct mathang
{
    char Tenmathang[20];
    int Dongia;
    int Soluong;
} MATHANG;


 void Nhapmathang(MATHANG& MH)
{
    fflush(stdin);
    printf("Nhap ten mat hang: ");
    gets_s(MH.Tenmathang);

    
    printf("Nhap don gia: ");
    scanf_s("%d",&MH.Dongia);

   
    printf("Nhap so luong: ");
    scanf_s("%d", &MH.Soluong);

}

void Xuatmathang(MATHANG MH)
{
    printf("=================================\n");
    printf("Ten mat hang: %s\n",MH.Tenmathang);
    printf("Don gia: %d\n",MH.Dongia);
    printf("So luong: %d\n",MH.Soluong); 
}

int main()
{
    MATHANG MH3;
    Nhapmathang(MH3);
    Xuatmathang(MH3);
}