#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	//DOP_3.	Найти наибольший элемент матрицы A(n, m), а также номера строки и столбца, на пересечении кото-рых он находится.
	int B[10][10];
	int i, n, m, j, row = 0, column = 0, max = 0;
	cout << "Введите размер квадратной по вертикали матрицы(<10) = ";
	cin >> n;
	cout << "Введите размер квадратной по горизонтали матрицы(<10) = ";
	cin >> m;
	cout << "Введите элементы массива" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> B[i][j];
	cout << " Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < m; j++)
			cout << "B[" << i+1 << "," << j+1 << "] = " << B[i][j] << "\t";
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (B[i][j] > max) {
				max = B[i][j];
				column = j;
				row = i;
			}
	cout << "\nНомер строки №" << row+1 << "\tНомер столбца #" << column+1 << endl;
}
