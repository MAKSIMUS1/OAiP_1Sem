#include <iostream>
#include <ctime>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	//	 1. Определить, содержится ли наименьший элемент массива A в массиве B.
	const int SIZE = 100;
	bool proverka = false;
	int A[SIZE], B[SIZE], N, randomnoe, min = 101, i = 0;
	printf("Введите размер массивов(меньше 100): ");
	scanf_s("%d", &N);
	printf("Массив А:\n");
	srand((unsigned)time(NULL));
	for (int i = 0; i < N; i++) {
		randomnoe = rand() % 100;
		*(A + i) = randomnoe;
		printf("Номер элемента №%d %d\n", i + 1, *(A + i));
	}
	printf("=============================================\nМассив B:\n");
	for (int i = 0; i < N; i++) {
		randomnoe = rand() % 100;
		*(B + i) = randomnoe;
		printf("Номер элемента №%d %d\n", i + 1, *(B + i));
	}
	for (int i = 0; i < N; i++) {
		if (*(A + i) < min) {
			min = *(A + i);
		}
	}
	printf("Наименьший элемент массива A = %d\n", min);
	for (int i = 0; i < N; i++) {
		if (*(B + i) == min) {
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



