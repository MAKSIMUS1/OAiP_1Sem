#include <iostream>
#include <ctime>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	//	4. В массиве M, размером k, много совпадающих элементов.Найти количество различных элементов в нем(не упорядочивая массив).
	const int SZ = 200;
	int i, k, h, kol = 0, A[SZ];
	int rmn = 0, rmx = 20;
	printf("Введите размер массива: ");
	scanf_s("%d", &k);
	printf("Массив А:\n");
	srand((unsigned)time(NULL));
	for (i = 0; i < k; i++)
	{
		A[i] = rand() % rmx;
		printf("Элемент массива №%d %d\n", i + 1, A[i]);
	}
	for (i = 0; i < k; i++)
	{
		for (h = 0; h < k; h++) {
			if (A[i] == A[h] && i != h) {
				A[i] = 0;
			}
		}
	}
	for (i = 0; i < k; i++)
		if (A[i] > 0)
			kol++;
	printf("Количество различных чисел = %d\n", kol);
}