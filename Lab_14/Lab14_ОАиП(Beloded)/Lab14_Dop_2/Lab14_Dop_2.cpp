#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	//DOP_2. Дана целочисленная матрица A(n, m).Вычислить сумму и произведение тех её элементов, которые при делении на два дают нечётное число.
	int B[10][10];
	int i, m, n, j, i_Y = 0, row = 0, column = 0, max = 0, sum = 0, proizv = 1;
	cout << "Введите размер квадратной по вертикали матрицы(<10) = ";
	cin >> n;
	cout << "Введите размер квадратной по горизонтали матрицы(<10) = ";
	cin >> m;
	cout << "Введите элементы массива" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> B[i][j];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (B[i][j] % 2 == 0) {
			if ((B[i][j] / 2) % 2 == 1)
			{
				cout << "Вот это число, которой при делении на два даёт нечётное число = " << B[i][j] << endl;
				sum += B[i][j];
				proizv *= B[i][j];
			}
		    }
		}
	}

}
