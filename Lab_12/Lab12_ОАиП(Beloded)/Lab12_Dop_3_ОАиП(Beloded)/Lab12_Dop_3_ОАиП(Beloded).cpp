#include <iostream>
#include <ctime>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	//Даны массивы A и B, состоящие из n элементов.Построить массив S, каждый элемент которого равен сумме соответствующих элементов массивов A и B.
	const int SIZE = 100;
	bool proverka = false;
	int A[SIZE], B[SIZE], S[SIZE], N, randomnoe;
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
	printf("=============================================\nМассив S:\n");
	for (int i = 0; i < N; i++) {
		*(S + i) = (*(A + i) + *(B + i));
		printf("Номер элемента №%d %d\n", i + 1, *(S + i));
	}
}



