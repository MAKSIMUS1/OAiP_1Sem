#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	// 6_2.	Извлечь 3 бита числа А, начиная с позиции n, и вставить в число В, начиная с позиции m.
	char tmp[33];
	int A, B, n, m, maskA = 7, maskB;
	cout << "Первое число А = "; cin >> A;
	cout << "Второе число В = "; cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "Число А в двоичном  виде: " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "Число B в двоичном  виде: " << tmp << endl;
	cout << "Введите c какой позиции извлекаем 3 бита(считая от права и включая саму позицию) , n = "; cin >> n;
	cout << "Введите c какой позиции вставляем извлеченные биты(считая от права и включая саму позицию), m = "; cin >> m;
	maskA <<= (n - 1);
	maskB = ~maskA >> abs(n - m);
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для B: " << tmp << endl;
	_itoa_s(((A & maskA) >> abs(n - 1)), tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(B & maskB, tmp, 2);
	cout << "Очищены биты в B: " << tmp << endl;
	_itoa_s(((B & maskB) | (((A & maskA) >> abs(n - 1)) << (m - 1))), tmp, 2);
	cout << "Результат замены B = " << tmp << endl;
}

