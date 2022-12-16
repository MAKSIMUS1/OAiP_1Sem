#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	//1. Дана матрица A(n, n). Переписать элементы её главной диагонали в одномерный массив Y(N) и разделить их на максимальный элемент главной диагонали. 
	int B[10][10], Y[20];
	int i, n, j, i_Y = 0, row = 0, column = 0, max = 0;
	cout << "Введите размер квадратной матрицы(<10) = ";
	cin >> n;
	cout << "Введите элементы массива" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> B[i][j];
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
		if (i_Y > max) {
			max = i_Y;
		}
	}
	cout << "Максимальный элемент главной диагонали = " << max << endl;
	for (i = 0; i < i_Y; i++) {
		cout << "Элемент главной диагонали разделённый на максимальный элемент #" << i + 1 << " = " << (Y[i] / max) << endl;

	}

}
