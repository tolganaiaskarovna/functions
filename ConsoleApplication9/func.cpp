#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;

void swap(int *x, int *y);


int main(void)
{
	setlocale(LC_ALL, "Rus");
	int i, j;
	i = 10;
	j = 20;
	printf("i � j ����� ������� ����������: %d %d\n", i, j);
	swap(&i, &j);/* �������� ������ ���������� i �j*/
	printf("i � j �����  ������ ����������: %d %d\n", i, j);
	return 0;
}
void swap(int *x, int *y)
{
	int temp;

	temp = *x;/* ��������� �������� �� ������ �    */
	*x = *y;/* ���������  � � �  */
	*y = temp;/*���������  � � �   */



}




