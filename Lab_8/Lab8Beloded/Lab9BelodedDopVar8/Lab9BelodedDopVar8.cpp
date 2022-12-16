#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	// ДОПОЛНИТЕЛЬНОЕ (ВАРИАНТ 8)
	const float n = 200, e = 0.0001;
	//f(x)= x^3 - 1 ;
	//      Метод трапеций
	double  x, h, s, a = 0, b = 3, i = 0;
	h = (b - a) / n;
	x = a;
	s = 0;
	do {
		s = s + h * ((pow(x, 3) - 1) + (pow(x + h, 3) - 1)) / 2;
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
		s2 += (pow(x, 3) - 1);
		x += h;
		s1 += (pow(x, 3) - 1);
		x += h;
		i += 1;
	} while (i < n);
	S = (h / 3) * ((pow(a, 3) - 1) + 4 * (pow((a + h), 3) - 1) + 4 * s1 + 2 * s2 + (pow(b, 3) - 1));
	printf_s("S = %10f\n", S);

	//			Метод дихотомии для решения уравнения.
	//		f(x)= x^3 + x - 4 ;	
	do {
		x = (a + b) / 2;
		if (((pow(x, 3) + x - 4) * (pow(a, 3) + x - 4)) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	} while (abs(a - b) > 2 * e);
	printf_s("x = %10f\n", x);
}