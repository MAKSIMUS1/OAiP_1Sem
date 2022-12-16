#include <iostream>
#include <ctime>
#include <math.h>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	//1. Найти в массиве элемент, наиболее близкий к среднему арифметическому суммы его элементов.
	using namespace std;
	const int N = 100;
	int i, j = 0, sz, A[N], summa_massiva = 0, nomer_ulementa = 1;
	float raznica = 10000, srednee_arifmeticheskoe, naimenchau_raznica, naibolee_blizkoe;
	int rmn = 0, rmx = 99;
	printf("Введите размер массива(меньше 100): ");
	scanf_s("%d", &sz);
	printf("Массив А:\n");
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = rand() % rmx; 
		printf("Номер элемента №%d %d\n", nomer_ulementa, A[i]);
		nomer_ulementa++;
		summa_massiva += A[i];
	}

	printf("Сумма массива: %d\n", summa_massiva);
		srednee_arifmeticheskoe = (float)summa_massiva / (float)sz;
		printf("Среднее арифметическое: %.3f\n", srednee_arifmeticheskoe);
		
		for (i = 0; i < sz; i++)
		{
			if (fabs(srednee_arifmeticheskoe - A[i]) < raznica){
				raznica = fabs(srednee_arifmeticheskoe - A[i]);
					j = i;
			}

		}
	printf("Наиболее близкое значение: %d", A[j]); 