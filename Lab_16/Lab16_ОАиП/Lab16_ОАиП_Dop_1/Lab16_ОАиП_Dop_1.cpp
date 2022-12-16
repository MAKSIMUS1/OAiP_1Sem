#include <iostream>
using namespace std;

void matrix();           //прототип

int main(void)
{
	//DOP_1.	Дан двумерный массив, состоящий из N строк и М столбцов.
	//Найти количество отрицательных, положительных и нулевых элементов массива.
	setlocale(LC_CTYPE, "Russian");
	int choice;
	do
	{
		cout << "Выберите вариант работы" << endl;
		cout << "1 - с матрицей" << endl;
		cout << "2 - выход" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:	matrix();
			break;
		case 2:  break;
		}
	} while (choice != 2);
}
void matrix_dop_1()
{
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