#include <iostream>
#include <ctime>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	//2. Дан массив A из n элементов и B из m элементов.Содержится ли наибольший элемент массива A в масси - ве B ?
	const int SIZE = 100;
	bool proverka = false;
	int A[SIZE], B[SIZE], N, N_B, randomnoe, max = 0, i = 0;
	printf("Введите размер массива A(меньше 100): ");
	scanf_s("%d", &N);
	printf("Массив А:\n");
	srand((unsigned)time(NULL));
	for (int i = 0; i < N; i++) {
		randomnoe = rand() % 100;
		*(A + i) = randomnoe;
		printf("Номер элемента №%d %d\n", i + 1, *(A + i));
	}
	printf("=============================================\n");
	printf("Введите размер массива B(меньше 100): ");
	scanf_s("%d", &N_B);
	printf("Массив B:\n");
	for (int i = 0; i < N_B; i++) {
		randomnoe = rand() % 100;
		*(B + i) = randomnoe;
		printf("Номер элемента №%d %d\n", i + 1, *(B + i));
	}
	for (int i = 0; i < N; i++) {
		if (*(A + i) > max) {
			max = *(A + i);
		}
	}
	printf("Наибольший элемент массива A = %d\n", max);
	for (int i = 0; i < N_B; i++) {
		if (*(B + i) == max) {
			proverka = true;
		}
	}
	if (proverka == true) {
		printf("Да");
	}
	else {
		printf("Нет");
	}
}



