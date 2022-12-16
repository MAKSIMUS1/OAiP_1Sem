#include <ctime>
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	//2.	Найти в матрице первую строку, все элементы которой положительны, и сумму этих элементов.
	//Уменьшить все элементы матрицы на эту сумму.
	int size, mult = 1, sum = 0, ** A, proverka = 0, proverka_na_pervuy_stroku = 0, nomer_stroki = 0;
	cout << "Введите размер квадратной матрицы ";
	cin >> size;
	srand((unsigned)time(NULL));
	A = new int* [size];    //выделение динам.памяти
	for (int i = 0; i < size; i++) {
		A[i] = new int[size];
		cout << "Строка №" << i + 1 << " ";
		for (int j = 0; j < size; j++) {
			A[i][j] = rand() * (60 - -(10)) / RAND_MAX + -(10);// генерация от -10 до 60
			cout << "\t" << A[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < size; i++) {
		if (proverka_na_pervuy_stroku != 1) {
			proverka = 0;
			for (int j = 0; j < size; j++) {
				if (A[i][j] > 0) {
					proverka++;
				}
			}
			if (proverka == size) { //Проерка строки на все пол. числа
				nomer_stroki = i;
				proverka_na_pervuy_stroku = 1;
			}
		}
	}
	cout << "Номер этой строки = " << nomer_stroki + 1 << endl;

	for (int k = 0; k < size; k++) //освобождение памяти
		delete[] A[k];
	delete[] A;

}
