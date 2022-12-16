#include <ctime>
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	//DOP_1. В одномерном массиве, состоящем из k целых элементов,
	//вычислить количество положительных элементов массива и сумму элементов массива,
	//расположенных после последнего элемента, равного нулю.

	int size = 0, nomer = 0, proverka = 0;
	int a = -3, b = 3, kol_vo_pol = 0, summa = 0;
	cout << "Введите размер массива" << endl;
	cin >> size;
	srand((unsigned)time(NULL));
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() * (b - a) / RAND_MAX + a; //генерация чисел от 3 до -3
		cout << "Элемент динамического массива №" << i + 1 << "\t" << arr[i] << "\t" << arr + i << endl;
	}
	//Ищем последний элемент равный нулю
	for (int i = size - 1; i >= 0; i--){
		if ((arr[i] == 0) && (proverka != 1)){
			proverka = 1;
			nomer = i;
		}
	}
	cout << "Номер = " << nomer + 1 << endl;
	for (int i = nomer; i < size; i++) {
		if (arr[i] > 0) {
			kol_vo_pol++;
		}
		summa += arr[i];
	}
	cout << "Колчество положительных = " << kol_vo_pol << endl << "Сумма = " << summa << endl;
	delete[] arr;
}
