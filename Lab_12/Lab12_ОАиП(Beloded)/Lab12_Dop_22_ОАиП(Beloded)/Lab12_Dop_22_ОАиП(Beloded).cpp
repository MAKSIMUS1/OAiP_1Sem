#include <iostream>
#include <ctime>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	// Заданы два массива по 10 целых чисел в каждом.Найти наибольшее среди чисел первого массива, которое не входит во второй массив.
	const int SIZE = 10;
	int A[SIZE], B[SIZE], C[SIZE], randomnoe, max = 0, proverka = 0;
	printf("Массив A:\n");
	srand((unsigned)time(NULL));
	for (int i = 0; i < SIZE; i++) {
		randomnoe = rand() % 100;
		*(A + i) = randomnoe;
		printf("Номер элемента №%d %d\n", i + 1, *(A + i));
	}
	printf("=============================================\n");
	printf("Массив B:\n");
	for (int i = 0; i < SIZE; i++) {
		randomnoe = rand() % 100;
		*(B + i) = randomnoe;
		printf("Номер элемента №%d %d\n", i + 1, *(B + i));
	}
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (*(A + i) != *(B + j)) {
				proverka++;
			}
		}
		if (proverka == 10) {
			*(C + i) = *(A + i);
		}
		proverka = 0;
	}
	for (int i = 0; i < SIZE; i++) {
		printf("Номер элемента C №%d %d\n", i + 1, *(C + i));
	}
	for (int i = 0; i < SIZE; i++) {
		if (*(C + i) > max) {
			max = *(C + i);
		}
	}
	printf("Наибольший элемент = %d", max);
}



