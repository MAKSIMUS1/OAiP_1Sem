#include <iostream>
using namespace std;

int sum(int*, int);

int main() {
    //DOP_1. Найти сумму минимального и максимального элементов одномерного массива.
    setlocale(LC_CTYPE, "Russian");
    srand((unsigned)time(NULL));
    int size;
    cout << "Введите размер массива = ";
    cin >> size;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 50; //генерация чисел от 0 до 50
    }
    for (int i = 0; i < size; i++) {
        cout << "Элемент динамического массива №" << i + 1 << "\t" << arr[i] << "\t" << "Адрес: " << arr + i << endl;
    }
    cout << "Сумма минимального и максимального элемента: " << sum(arr, size) << endl;
    delete[] arr;
}

int sum(int* x, int n)
{
    int res = 1, min = 10000, max = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] < min) {
            min = x[i];
        }
        if (x[i] > max) {
            max = x[i];
        }
    }
    cout << "Минимальный элемент = " << min << "\n" << "Максимальный элемент = " << max << endl;
    return min + max;
}


