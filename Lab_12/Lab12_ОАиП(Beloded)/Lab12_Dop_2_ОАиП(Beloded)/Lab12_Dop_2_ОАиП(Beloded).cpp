#include <iostream>
#include <ctime>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	//1. Дан массив X, содержащий k элементов, и массив Y, содержащий n элементов.Сформировать массив Z, содержащий общие элементы массивов X и Y.
	const int SIZE = 100;
	bool proverka = false;
	int A[SIZE], B[SIZE], Z[SIZE], N, N_B, randomnoe, max, i = 0;
	printf("Введите размер массива X(меньше 100): ");
	scanf_s("%d", &N);
	printf("Массив X:\n");
	srand((unsigned)time(NULL));
	for (int i = 0; i < N; i++) {
		randomnoe = rand() % 100;
		*(A + i) = randomnoe;
		printf("Номер элемента №%d %d\n", i + 1, *(A + i));
	}
	printf("=============================================\n");
	printf("Введите размер массива Y(меньше 100): ");
	scanf_s("%d", &N_B);
	printf("Массив Y:\n");
	for (int i = 0; i < N_B; i++) {
		randomnoe = rand() % 100;
		*(B + i) = randomnoe;
		printf("Номер элемента №%d %d\n", i + 1, *(B + i));
	}
	if (N >= N_B) {
		max = N;
	}
	else {
		max = N_B;
	}
	int q = 0;
	for (int i = 0; i < max; i++) {
		if (*(A + i) == *(B + i))
	}
}



