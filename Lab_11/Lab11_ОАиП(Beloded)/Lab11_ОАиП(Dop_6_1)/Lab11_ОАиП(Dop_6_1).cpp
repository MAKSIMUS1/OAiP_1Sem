#include <iostream>
#include <stdio.h>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	//	6_1.	Установить в единицу каждый второй значащий бит целого числа А.
	char tmp[33];
	int raz = 0, n = 0, A, A_clon, mask = 0;
	cout << "Введите число А = "; cin >> A;
	A_clon = A;
	_itoa_s(A, tmp, 2);
	cout << "Число А в двоичном  виде: " << tmp << endl;
	while (A_clon >= 1) {
		A_clon = A_clon / 2;
		raz++;
	}
	for (int i = 0; i < (raz / 2)+1; i++) {
		mask = mask + pow(2, n);
		n += 2;
	}
	mask >>= 1;
	_itoa_s(mask, tmp, 2);
	cout << "Маска: " << tmp << endl;
	_itoa_s(A | mask, tmp, 2);
	cout << "Итоговое число: " << tmp << endl;
}