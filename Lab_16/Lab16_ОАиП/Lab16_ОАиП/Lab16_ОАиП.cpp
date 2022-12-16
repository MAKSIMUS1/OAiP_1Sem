#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

void matrix_osnovnoe();   //прототипы
void stroki();	
void matrix_dop_1();
void matrix_dop_2();
void matrix_dop_3();

int main()
{
	//1. Дан двумерный массив, состоящий из N строк и М столбцов, а также число number.
	//   Проверить, находится ли это число  на главной диагонали.
	setlocale(LC_CTYPE, "Russian");
	int choice;
	do
	{
		cout << "Выберите вариант работы" << endl;
		cout << "(ОСНОВНОЕ) 1 - С матрицей (Проверить, находится ли это число  на главной диагонали)" << endl;
		cout << "(ОСНОВНОЕ) 2 - Строки (Написать программу, которая вводит ряд слов и выводит те из них, которые начинаются с буквы «b».)" << endl;
		cout << "(ДОПОЛНИТЕЛЬНОЕ) 3 - С матрицей (Найти количество отрицательных, положительных и нулевых элементов массива)" << endl;
		cout << "(ДОПОЛНИТЕЛЬНОЕ) 4 - С массивом (сколько раз встречается в массиве максимальное число)" << endl;
		cout << "(ДОПОЛНИТЕЛЬНОЕ) 5 - С матрицей (Найти сумму элементов, лежащих ниже главной диагонали в целочисленном массиве A[n, n])" << endl;
		cout << "6 - Выход" << endl;
		cout << "Выбор: ";
		cin >> choice;
		switch (choice)
		{
		case 1:	matrix_osnovnoe();
			break;
		case 2:	stroki();
			break;
		case 3:	matrix_dop_1();
			break;
		case 4:	matrix_dop_2();
			break;
		case 5:	matrix_dop_3();
			break;
		case 6:  break;
		}
	} while (choice != 6);
}
/// <summary>
/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// </summary>
void matrix_osnovnoe()
{
	int** A, row, col, i, j, number;
	bool proverka = false;

	cout << "Введите число дял проверки = " << endl;
	cin >> number;
	cout << "Введите число строк матрицы = ";
	cin >> row;
	cout << "Введите чиcло столбцов =  ";
	cin >> col;
	A = new int* [row];
	for (i = 0; i < row; i++)
		A[i] = new int[col];
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			cout << "Введите A[" << i << "],[" << j << "]= ";
			cin >> A[i][j];
		}
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			if (i == j)
				if (number == A[i][j])
					proverka = true;
	if (proverka == false) {
		cout << "Результат = Нет, этого числа есть на главной дигонали " << endl;
	}
	if (proverka == true) {
		cout << "Результат = Да, это число есть на главной дигонали " << endl;
	}
	for (i = 0; i < row; i++)
		delete A[i];
	delete[] A;
}
/// <summary>
/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// </summary>
void stroki()
{
	//Написать программу, которая вводит ряд слов и выводит те из них, которые начинаются с буквы «b».
	int i, N_strok, k = 1;
	cout << "Введите количество слов = ";
	cin >> N_strok;
	char** stroki;
	stroki = new char* [N_strok];
	for (i = 0; i < N_strok; ++i) {
		stroki[i] = new char[20];
		cout << "Введите слово №" << i + 1 << ": ";
		cin >> stroki[i];
	}

	for (i = 0; i < N_strok; ++i) {// проверка на "b"
		if (stroki[i][0] == 'b') {
			cout << "Вот слово начинающееся на b №" << k << ": " << stroki[i] << endl;
			k++;
		}
	}
	for (i = 0; i < N_strok; ++i)
		delete[] stroki[i];
	delete[] stroki;
}
/// <summary>
/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// </summary>
void matrix_dop_1()
{
	//DOP_1.	Дан двумерный массив, состоящий из N строк и М столбцов.
	//Найти количество отрицательных, положительных и нулевых элементов массива.
	int** A, row, col, i, j, number_of_pol = 0, number_of_otr = 0, number_of_null = 0;
	bool proverka = false;

	cout << "Введите число строк матрицы = ";
	cin >> row;
	cout << "Введите чиcло столбцов =  ";
	cin >> col;
	A = new int* [row];
	for (i = 0; i < row; i++)
		A[i] = new int[col];
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			cout << "Введите A[" << i << "],[" << j << "]= ";
			cin >> A[i][j];
		}
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++) {
			if (A[i][j] > 0)
				number_of_pol++;
			if (A[i][j] == 0)
				number_of_null++;
			if (A[i][j] < 0)
				number_of_otr++;
		}

	cout << " Количество положительных чисел = " << number_of_pol << endl;
	cout << " Количество нулей = " << number_of_null << endl;
	cout << " Количество отрицательных чисел = " << number_of_otr << endl;

	for (i = 0; i < row; i++)
		delete A[i];
	delete[] A;
}
/// <summary>
/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// </summary>
void matrix_dop_2()
{
	//DOP_2.	Задан массив A из n чисел.Подсчитать, сколько раз встречается в нем максимальное число.
	 int* M, size, i, max = -100000, kol_of_max = 0;
	cout << "Введите размер массива ";
	cin >> size;
	M = new int[size];
	for (i = 0; i < size; i++)
	{
		cout << "Введите " << i + 1 << " число ";
		cin >> *(M + i);
	}
	for (i = 0; i < size; i++)
		if (M[i] > max)
			max = M[i];
	for (i = 0; i < size; i++)
		if (M[i] == max)
			kol_of_max++;
	cout << "Максимальное число = " << max << endl;
	cout << "Максимальное число встречается в этом массиве  = " << kol_of_max << endl;
	delete[] M;
}
/// <summary>
/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// </summary>
void matrix_dop_3()
{
	//DOP_3.	Найти сумму элементов, лежащих ниже главной диагонали в целочисленном массиве A[n, n].
	int** A, row, col, i, j, summa = 0;
	bool proverka = false;

	cout << "Введите размер квадратной матрицы = ";
	cin >> row;
	col = row;
	A = new int* [row];
	for (i = 0; i < row; i++)
		A[i] = new int[col];
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			cout << "Введите A[" << i << "],[" << j << "]= ";
			cin >> A[i][j];
		}
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			if (i > j) {
				cout << "Вот элемент лежащий ниже главной диагонали A[" << i << "],[" << j << "]= " << A[i][j] << endl;
				summa += A[i][j];
			}

	cout << "Сумма элементов, лежащих ниже главной диагонали = " << summa << endl;
	

	for (i = 0; i < row; i++)
		delete A[i];
	delete[] A;
}