#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	//2. Найти в матрице первый столбец, все элементы которого положительны.Знаки элементов предыдущего столбца изменить на противоположные.
	const int n = 3;
	int B[n][n], Y[20];
	int i, j, i_Y = 0, row = 0, column = -1, max = 0;
	cout << "Введите элементы массива" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> B[i][j];
	i = 0;
	for (j = 0; j < n; j++) {
		if ((column == -1)&&(B[i][j] >= 0) && (B[i+1][j] >= 0) && (B[i+2][j] >= 0)) {
			column = j;
		}
	}
	cout << " Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << "B[" << i << "," << j << "] = " << B[i][j] << "\t";
	}
	if (column == 0) {
		for (i = 0; i < n; i++) {
			B[i][2] = B[i][2] * (-1);
		}
	}
	if (column != 0) {
		for (i = 0; i < n; i++) {
			B[i][column + 1] = B[i][column + 1] * (-1);
		}
	}
	cout << " Другой массив массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << "B[" << i << "," << j << "] = " << B[i][j] << "\t";
	}
}
