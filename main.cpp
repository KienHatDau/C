#include <stdio.h>
#include <conio.h>
#define PI 3.14
int main()
{
	float bankinh;
	float chuvi, dientich;

	printf("\n Nhap vao ban kinh : ");
	scanf("%f", &bankinh);

	chuvi = bankinh * 2 * PI;
	dientich = PI * bankinh * bankinh;
	printf("\n Chu vi = %f ", chuvi);
	printf("\nDien tich = %f", dientich);
	getch();
	return 0;

}