/*
	2.2.  Hãy cài đặt hàm đệ quy tính T(n) = n! = 1 x 2 x 3 x … x n. Trong đó T(0) = 1
*/

#include<stdio.h>
#include<conio.h>

int giaithu(int n)
{
	if (n == 0) {
		return 1;
	}
	return n*giaithu(n - 1);
}
int main()
{
	int n, giaithua;

	printf("Nhap n: ");
	scanf_s("%d", &n);

	int T = giaithu(n);
	printf("Tinh giai thua: %d\n", T);
}