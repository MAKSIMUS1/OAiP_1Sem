#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	// 8_1.	Установить в ноль каждый третий значащий бит целого числа А.
	char tmp[33];
	int n = 0, A, mask = 0;
	cout << "Введите число А = "; cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число А в двоичном  виде: " << tmp << endl; 
	for (int i = 0; i < 11; i++) {
		mask = mask + pow(2, n);
		n += 3;
	}
	mask >>= 1;
	mask = ~mask;
	_itoa_s(mask, tmp, 2);
	cout << "Маска: " << tmp << endl;
	_itoa_s(A & mask, tmp, 2);
	cout << "Итоговое число: " << tmp << endl;
}

