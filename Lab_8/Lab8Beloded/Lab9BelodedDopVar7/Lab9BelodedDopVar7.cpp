#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	// ДОПОЛНИТЕЛЬНОЕ (ВАРИАНТ 7)
	const float n = 200, e = 0.0001;
	//f(x)= e^x + 2 ;
	//      Метод трапеций
	double  x, h, s, a = 5, b = 11, i = 0;
	h = (b - a) / n;
	x = a;
	s = 0;
	do {
		s = s + h * ((exp(x) + 2) + (exp(x + h) + 2)) / 2;
		x += h;
	} while (x < (b - h));
	printf_s("s = %10f\n", s);
	//        Метод парабол
	int ostanovka = 0;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	double S, s1 = 0, s2 = 0;
	i = 1;
	do {
		s2 += (exp(x) + 2);
		x += h;
		s1 += (exp(x) + 2);
		x += h;
		i += 1;
	} while (i < n);
	S = (h / 3) * ((exp(a) + 2) + 4 * (exp(a + h) + 2) + 4 * s1 + 2 * s2 + (exp(b) + 2));
	printf_s("S = %10f\n", S);

	//			Метод дихотомии для решения уравнения.
	//		f(x)= x^3 + x - 4 ;	
	do {
		x = (a + b) / 2;
		if (((exp(x) + 2) * (exp(a) + 2)) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	} while (abs(a - b) > 2 * e);
	printf_s("x = %10f\n", x);
}