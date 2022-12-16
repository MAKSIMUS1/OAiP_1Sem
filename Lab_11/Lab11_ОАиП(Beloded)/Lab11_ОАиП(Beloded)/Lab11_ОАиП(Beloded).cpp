#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	// 9_1.	Извлечь 5 битов числа A, начиная с третьего по счету справа, и вставить их в число B, начиная со 2 по счету справа
	char tmp[33];
	int A, B, maskA = 124; //1111100
	int maskB = ~maskA >> 1;  
	cout << "Первое число А="; cin >> A;
	cout << "Второе число В="; cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl; //20 = 10100
	_itoa_s(B, tmp, 2);		  
	cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2); // 17 = 10001
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 2, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB | 1, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s((B & maskB) | 1, tmp, 2);
	cout << " Очищены биты в B: " << tmp << endl;
	_itoa_s((((B & maskB) | 1) | ((A & maskA) >> 1)), tmp, 2);
	cout << " Результат B=" << tmp << endl;
}

