#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	//DOP_1.	Найти наименьший элемент главной диагонали матрицы С(n, n) и вывести на печать столбец, в котором он находится.
	int B[10][10], Y[11];
	int i, n, j, i_Y = 0, row = 0, column = 0, min = 10000;
	cout << "Введите размер квадратной матрицы(<10) = ";
	cin >> n;
	cout << "Введите элементы массива" << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "B[" << i << "," << j << "] = ";
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i == j)
			{
				Y[i_Y] = B[i][j];
				i_Y++;
			}
	cout << " Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << "B[" << i << "," << j << "] = " << B[i][j] << "\t";
	}
	cout << endl;
	for (i = 0; i < i_Y; i++) {
		cout << "Элемент главной диагонали #" << i + 1 << " = " << Y[i] << endl;

	}
	for (i = 0; i < i_Y; i++) {
		if (Y[i] < min && min != -858993460 && i_Y != -858993460) {
			min = Y[i];
		}
	}
	cout << "Минимальный элемент главной диагонали = " << min << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if ((i == j)&&(min == B[i][j]))
			{
				column = j;
			}
	for (int i = 0; i < n; i++) {
		cout << "B[" << i << "," << column << "] = " << B[i][column] << "\n";
	}

}
