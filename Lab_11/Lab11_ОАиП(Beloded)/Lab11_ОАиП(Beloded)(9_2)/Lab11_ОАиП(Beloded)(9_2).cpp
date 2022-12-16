#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	// 9_2.	Установить в 0 n битов в числе А вправо от позиции p.
	int A, n, p, mask = 0; char num[33];
	cout << "Введите число А = "; cin >> A;
	_itoa_s(A, num, 2);
	cout << "Число А в двоичном  виде: " << num << endl;
	cout << "Введите c какого бита начинать замену, p = "; cin >> p;
	cout << "Скольно битов заменяем на 0, n = "; cin >> n;
	for (int i = 0; i < n; i++) {
		mask = mask + pow(2, i);
	}
	_itoa_s(~(mask << p - n - 1), num, 2);
	cout << "Маска: " << num << endl;
	_itoa_s(A & (~(mask << p - n - 1)), num, 2);
	cout << "Итоговое число: " << num << endl;
}
