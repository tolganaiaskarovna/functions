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
	printf("i и j перед обменом значениями: %d %d\n", i, j);
	swap(&i, &j);/* передать адреса переменных i иj*/
	printf("i и j после  обмена значениями: %d %d\n", i, j);
	return 0;
}
void swap(int *x, int *y)
{
	int temp;

	temp = *x;/* сохранить значение по адресу х    */
	*x = *y;/* поместить  у в х  */
	*y = temp;/*поместить  х в у   */



}




