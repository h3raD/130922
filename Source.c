#include <stdio.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "rus");
	int n = 2, k = 3, m = 1;
	printf("������� 1: ����� %d%d%d �������� �� 333\n\t\t\t\t\t", n,k,m);
	printf("���� %f:" ,231./333);
}