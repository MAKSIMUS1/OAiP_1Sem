#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	// ДОПОЛНИТЕЛЬНОЕ (ВАРИАНТ 6)
	const float n = 200, e = 0.0001;
	//f(x)= 1 + x^3 ;
	//      Метод трапеций
	double  x, h, s, a = 1, b = 5, i = 0;
	h = (b - a) / n;
	x = a;
	s = 0;
	do {
		s = s + h * ((1 + pow(x, 3)) + (1 + pow(x + h, 3))) / 2;
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
	S = (h / 3) * ((1 + pow(a, 3)) + 4 * (1 + pow(x + h, 3)) + 4 * s1 + 2 * s2 + (1 + pow(b, 3)));
	printf_s("S = %10f\n", S);

	//			Метод дихотомии для решения уравнения.
	//		f(x)= 5x - 1 + x^3 ;	
	do {
		x = (a + b) / 2;
		if ((5*x-1+pow(x, 3))*((5*a - 1 + pow(a, 3))) <= 0){
			b = x;
		}
		else {
			a = x;
		}
	} while (abs(a - b) > 2 * e);
	printf_s("x = %10f\n", x);
}