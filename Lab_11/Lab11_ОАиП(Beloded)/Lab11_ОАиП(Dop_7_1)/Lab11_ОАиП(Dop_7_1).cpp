#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	// 7_1.	Извлечь 4 бита числа A, начиная с пятого по счету справа, и добавить их к числу B справа.
	char tmp[33];
	int A, B, maskA = 240; //	240   =   1111 0000
	int maskB = ~maskA >> 4;
	cout << "Первое число А = "; cin >> A;//	4 095   =   1111 1111 1111
	cout << "Второе число В = "; cin >> B;//	4 992	=	1 0011 1000 0000
	_itoa_s(A, tmp, 2);
	cout << "Число А в двоичном  виде: " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "Число B в двоичном  виде: " << tmp << endl;
	_itoa_s(maskA, tmp, 2); 
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 4, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s((B & maskB), tmp, 2);
	cout << "Очищены биты в B: " << tmp << endl;
	_itoa_s((((B & maskB)) | ((A & maskA) >> 4)), tmp, 2);
	cout << "Результат B = " << tmp << endl;
}