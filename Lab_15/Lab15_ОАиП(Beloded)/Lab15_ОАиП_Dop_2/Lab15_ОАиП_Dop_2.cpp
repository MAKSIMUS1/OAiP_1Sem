#include <ctime>
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	//2.	В одномерном массиве, состоящем из n вещественных элементов,
	//вычислить минимальный элемент массива и сумму элементов,
	//расположенных между первым и последним положительными элементами.

	int size = 0, proverka_na_posl = 0, proverka_na_perv = 0, nomer_posl = 0, nomer_perv = 0, summa = 0;
	int a = -20, b = 20;
	cout << "Введите размер массива" << endl;
	cin >> size;
	srand((unsigned)time(NULL));
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() * (b - a) / RAND_MAX + a; //генерация чисел от 20 до -20
		cout << "Элемент динамического массива №" << i + 1 << "\t" << arr[i] << "\t" << arr + i << endl;
	}
	//Ищем последний элемент равный нулю
	for (int i = size - 1; i >= 0; i--) {
		if ((arr[i] > 0) && (proverka_na_posl != 1)) {
			proverka_na_posl = 1;
			nomer_posl = i;
		}
	}

	//Ищем последний элемент равный нулю
	for (int i = 0; i < size; i++) {
		if ((arr[i] > 0) && (proverka_na_perv != 1)) {
			proverka_na_perv = 1;
			nomer_perv = i;
		}
	}

	cout << "Номер первого положительного элемента = " << nomer_perv + 1 << endl;
	cout << "Номер последнего положительного элемента = " << nomer_posl + 1 << endl;

	for (int i = nomer_perv; i < nomer_posl; i++) {
		summa += arr[i];
	}
	cout << "Сумма между этими элементами = " << summa << endl;

	delete[] arr;
}
