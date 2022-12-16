#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	// ОСНОВНОЕ (ВАРИАНТ 9)
	const float n = 200, e = 0.0001;
	//f(x)=x^3+3
	//      Метод трапеций
	double  x, h, s, a = 3, b = 6, i = 0;
	h = (b - a) / n;
	x = a;
	s = 0;
	do {
		s = s + h * ((pow(x, 3) + 3) + (pow(x + h, 3) + 3)) / 2;
		x += h;
	} while (x < (b - h));
	printf_s("s = %10f\n", s);
	//        Метод парабол
	int ostanovka = 0;
	h = (b - a) / (2 * n);
	x = a + 2*h;
	double S, s1 = 0, s2 = 0;
	i = 1;
	do {
		s2 += (pow(x, 3) + 3);
		x += h;
		s1 += (pow(x, 3) + 3);
		x += h;
		i += 1;
	} while (i < n);
	S = (h / 3) * ((pow(a, 3) + 3) + 4 * (pow((a + h), 3) + 3) + 4 * s1 + 2 * s2 + (pow(b, 3) + 3));
	printf_s("S = %10f\n", S);

	//			Метод дихотомии для решения уравнения.
	//		f(x)=sin(x)+x^3;
	do {
		x = (a + b) / 2;
		if (((sin(x) + pow(x, 3)) * (sin(a) + pow(a, 3))) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	} while (abs(a - b) > 2 * e);
	printf_s("x = %10f\n", x);
}