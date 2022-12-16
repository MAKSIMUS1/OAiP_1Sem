#include <iostream>
using namespace std;

int proizvedenie(int*);

int main() {
    //DOP_3.Создать одномерный массив, содержащий 15 элементов, наполнить его случайными значениями в интервале от 1 до 200.
    //Определить произведение элементов массива с индексами от 2 до 7.
    setlocale(LC_CTYPE, "Russian");
    int size = 15;
    srand((unsigned)time(NULL));
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 200; 
    }
    for (int i = 0; i < size; i++) {
        cout << "Элемент динамического массива №" << i + 1 << "\t" << arr[i] << "\t" << "Адрес: " << arr + i << endl;
    }
    cout << "Произведение элементов массива с индексами от 2 до 7 " << proizvedenie(arr, size) << endl;
    delete[] arr;
}

int proizvedenie(int* x)
{
    int res = 1;
    for (int i = 2; i < 8; i++)
        res *= x[i];
    return res;
}


