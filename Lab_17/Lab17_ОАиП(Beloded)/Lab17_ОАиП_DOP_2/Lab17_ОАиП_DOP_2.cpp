#include <iostream>
using namespace std;

void proizvedenie(int*, int);

int main() {
    //DOP_3. Найти номера четных элементов, стоящих на нечетных местах в одномерном массиве.
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
    proizvedenie(arr, size);
    delete[] arr;
}

void proizvedenie(int* x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
        if ((i + 1) % 2 == 0)
            if (x[i] % 2 == 0)
                cout << "Вот четных элементов, стоящих на нечетных местах в одномерном массиве №" << i + 1 << "\t" << x[i] << endl;
}


