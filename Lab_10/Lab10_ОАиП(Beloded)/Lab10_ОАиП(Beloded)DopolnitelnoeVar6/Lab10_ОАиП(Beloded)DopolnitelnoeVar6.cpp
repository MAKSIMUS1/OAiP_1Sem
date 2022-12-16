#include <iostream>
#include <ctime>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	//	6. Найти непрерывную последовательность положительных чисел, сумма элементов в которой максимальная.
	//	Максимальный размер массива 100 элементов.Диапазон значений от - 100 до 100.
	using namespace std;
	const int N = 100;
	int i, sz, A[N], nomer_ulementa = 1, massiv_sum[N], summa_pologit = 0, g = 0, size_of_massiv_sum, maksimum = 0;
	int rmn = -100, rmx = 100;
	printf("Введите размер массива(меньше 100): ");
	scanf_s("%d", &sz);
	printf("Массив А:\n");
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		printf("Номер элемента №%d \t%d\n", nomer_ulementa, A[i]);
		nomer_ulementa++;
	}
	for (i = 0; i < sz; i++) {
		if (A[i] > 0) {
			summa_pologit += A[i];
		}
		else {
			massiv_sum[g] = summa_pologit;
			summa_pologit = 0;
			g++;
		}
	}
	nomer_ulementa = 1;
	size_of_massiv_sum = g;
	for (g = 0; g < size_of_massiv_sum; g++)
	{
		if (massiv_sum[g] > 0) {
			printf("Номер элемента массива сумм №%d %d\n", nomer_ulementa, massiv_sum[g]);
			nomer_ulementa++;
		}
	}
	for (g = 0; g < size_of_massiv_sum; g++) {
		if (massiv_sum[g] > maksimum) {
			maksimum = massiv_sum[g];
		}
	}
	printf("Непрерывная последовательность положительных чисел, сумма элементов в которой максимальная = %d\n", maksimum);
}