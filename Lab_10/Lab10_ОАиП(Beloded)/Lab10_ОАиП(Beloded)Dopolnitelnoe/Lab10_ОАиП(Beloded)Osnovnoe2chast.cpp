#include <iostream>
#include <ctime>
#include <math.h>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	//2. Задано два массива. Найти наибольшие среди элементов первого массива, которые не входят во второй массив. 
	using namespace std;
	const int N = 10000, N2 = 10000, N3 = 10000;
	int i, g, size3, j = 0, sz, sz2, A[N], A2[N2], A3[N3], proverka = 0, k = 0, maksimum = 0;
	int rmn = 0, rmx = 99;
	printf("Введите размер массива: ");
	scanf_s("%d", &sz);
	printf("Массив А:\n");
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = rand() % rmx; 
		printf("Элемент массива №%d %d\n", i+1, A[i]);
	}
	printf("Введите размер второго массива: ");
	scanf_s("%d", &sz2);
	printf("Массив B:\n");
	srand((unsigned)time(NULL));
	for (g = 0; g < sz2; g++)
	{
		A2[g] = rand() % rmx;
		printf("Элемент второго массива №%d %d\n", g+1, A2[g]);
	}
	for (i = 0; i < sz; i++) {
		for (g = 0; g < sz2; g++) {
			 if (A[i] != A2[g]) {
				proverka++;
			}
		}
		if (proverka == sz2) {
			A3[j] = A[i];
			j++;
			k++;
		}
		proverka = 0;
	}
	for (j = 0; j < k; j++)
	{
		printf("Элементы первого массива которые не входят во второй массив №%d %d\n", j + 1, A3[j]);
	}
	for (j = 0; j < k; j++) {
		if (A3[j] > maksimum) {
			maksimum = A3[j];
		}
	}
	printf("Наибольшиий среди элементов первого массива, который не входит во второй массив = %d\n", maksimum);
}