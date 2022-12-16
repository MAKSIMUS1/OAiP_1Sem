#include <iostream>
using namespace std;

int proizvedenie(int*, int);

int main() {
    //1. Создать одномерный массив, содержащий 15 элементов, наполнить его случайными значениями в интер-вале от 1 до 200.
    //Определить произведение всех элементов массива, значения которых меньше 50.
    setlocale(LC_CTYPE, "Russian");
    int size = 15;
    srand((unsigned)time(NULL));
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 200; //генерация чисел от 1 до 200
    }
    for (int i = 0; i < size; i++) {
        cout << "Элемент динамического массива №" << i + 1 << "\t" << arr[i] << "\t" << "Адрес: " << arr + i << endl;
    }
    cout << "Произведение элементов меньше 50 = " << proizvedenie(arr, size) << endl;
    delete[] arr;
}  

int proizvedenie(int* x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
        if (x[i] < 50) {
            res *= x[i];
            cout << "Вот этот элемент меншье 50 = " << x[i] << endl;
        }
    return res;
}


