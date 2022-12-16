#include <ctime>
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	//1.	В одномерном массиве, состоящем из n вещественных элементов,
	//вычислить произведение положительных элементов массива и сумму элементов массива, расположенных до минимального элемента.
	int size = 0, nomer = 0;
	double a = -100.4679, b = 50.5678, summa = 0, proizvedenie = 1, min = 1000;
	cout << "Введите размер массива" << endl;
	cin >> size;
	srand((unsigned)time(NULL));
	double* arr = new double[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() * (b - a) / RAND_MAX + a; //генерация чисел от 50.5678 до -100.4679
	}
	for (int i = 0; i < size; i++) {
		cout << "Элемент динамического массива №" << i + 1 << "\t" << arr[i] << "\t" << arr + i << endl;
	}
	//ищем минимальный элемент
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
			nomer = i;
		}
	}
	cout << "Номер = " << nomer + 1 << endl;
	for (int i = 0; i < nomer; i++) {
		summa += arr[i];
		if (arr[i] > 0) {
			proizvedenie *= arr[i];
		}
	}
	cout << "Сумма = " << summa << endl;
	cout << "Произведение = " << proizvedenie << endl;
	delete[] arr;
}
