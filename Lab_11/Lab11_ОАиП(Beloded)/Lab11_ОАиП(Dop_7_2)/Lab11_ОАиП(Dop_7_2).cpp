#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	//  7_2.	Установить в 1 n битов в числе А влево от позиции p, заменить ими m битов числа В, начиная с позиции q.
	int A, B, n, p, q, m, maskA = 0, maskB = 0; char num[33];
	cout << "Введите число А = "; cin >> A;		//	4 095   =     1111 1111 1111
	_itoa_s(A, num, 2);							//	4 992	=	1 0011 1000 0000
	cout << "Число А в двоичном  виде: " << num << endl;
	cout << "Введите число B = "; cin >> B;
	_itoa_s(B, num, 2);
	cout << "Число B в двоичном  виде: " << num << endl;
	cout << "Скольно битов заменяем на 1 в числе A, n = "; cin >> n;
	cout << "Введите от какого бита начинать замену в числе A, p = "; cin >> p;
	cout << "Скольно битов заменяем на 1 в числе B, m = "; cin >> m;
	cout << "Введите c какого бита начинать замену в чисое B(включая саму позицию), q = "; cin >> q;
	//		Число A
	for (int i = 0; i < n; i++) {
		maskA += pow(2, i);
	}
	maskA <<= p;
	_itoa_s(maskA, num, 2);
	cout << "Маска для A: " << num << endl;
	_itoa_s(A | maskA, num, 2);
	cout << "Итоговое число A: " << num << endl;
	//		Число B
	for (int i = 0; i < m; i++) {
		maskB += pow(2, i);
	}
	maskB <<= (q - 1);
	_itoa_s(maskB, num, 2);
	cout << "Маска для B: " << num << endl;
	_itoa_s(B | maskB, num, 2);
	cout << "Итоговое число B: " << num << endl;
}