#include <ctime>
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	//DOP_3.	Дана матрица размером 4x4.
	//Найти сумму наименьших элементов ее нечетных строк и наибольших элементов ее четных строк
	int size = 4, summa = 0, ** A, proverka = 0, proverka_na_pervuy_stroku = 0, nomer_stroki = 0;
	int min_mas[2], max_mas[2];
	int k_min = 0, k_max = 0;
	int min = 100, max = -50;
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
		if (i % 2 == 0) {//Нечётная т.к. строка массива i = 1 для нас выводится как 2
			for (int j = 0; j < size; j++) {
				if(A[i][j] < min){
					min = A[i][j];
				}
			}
			min_mas[k_min] = min;
			k_min++;
			min = 100;
		}
	}
	for (int i = 0; i < size; i++) {
		if (i % 2 == 01) {//Чётная
			for (int j = 0; j < size; j++) {
				if (A[i][j] > max) {
					max = A[i][j];
				}
			}
			max_mas[k_max] = max;
			k_max++;
			max = -50;
		}
	}

	for (int i = 0; i < 2; i++) {
		summa += (max_mas[i] + min_mas[i]);
	}
	cout << "Сумма = " << summa << endl;

	for (int k = 0; k < size; k++) //освобождение памяти
		delete[] A[k];
	delete[] A;

}
