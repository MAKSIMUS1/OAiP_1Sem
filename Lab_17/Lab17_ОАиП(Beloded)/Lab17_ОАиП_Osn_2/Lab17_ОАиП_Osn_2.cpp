#include <iostream>
using namespace std;

//2. Дана целочисленная матрица A размерности n x m и вектор B размерности m x 1.
//Если все числа отрица - тельны, то определить произведение этих массивов.


void func(int**, int*, int, int);

int main() {
    setlocale(LC_CTYPE, "Russian");
    srand((unsigned)time(NULL));
    //2. Дана целочисленная матрица A размерности n x m и вектор B размерности m x 1.
    //Если все числа отрицательны, то определить произведение этих массивов.
    int n, m, ** A;
    cout << "Введите количество строк матрицы = ";
    cin >> n;
    cout << "Введите количество столбцов матрицы = ";
    cin >> m;
    srand((unsigned)time(NULL));
    A = new int* [n];    //выделение динам.памяти
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
        cout << "Строка №" << i + 1 << "     ";
        for (int j = 0; j < m; j++) {
            A[i][j] = rand() * (10 - -(90)) / RAND_MAX + -(90);// генерация от -90 до 10
            cout << "A[" << i << "],[" << j << "]= "<< A[i][j] << "\t";
        }
        cout << endl;
    }
    
    //Вектор B
    int* arr = new int[m];

    for (int i = 0; i < m; i++) {
        arr[i] = rand() * (10 - -(90)) / RAND_MAX + -(90);
    }
    cout << "Вектор B:| " << arr[0] << " |" << endl;
    for (int i = 1; i < m; i++) {
        cout << "         | " << arr[i] << " |" << endl;
    }
    func(A, arr, n, m);
    //освобождение памяти
    for (int k = 0; k < n; k++) //освобождение памяти
        delete[] A[k];
    delete[] A;

    delete[] arr;
}
void func(int** matrix, int* vector, int n, int m)
{
    int res = 0, proverka = 0, c = 0;
    for (int i = 0; i < m; i++)
        if (vector[i] < 0) {
            proverka++;
        }//проверка на то что все элементы вектора отрицательные
    if (proverka == m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] *= vector[j];
                //Умножение матрицы на вектор производится по правилу «строка на столбец».
                //При умножении матрицы на вектор-столбец число столбцов в матрице должно совпадать с числом строк в векторе-столбце.
                //Результатом умножения матрицы на вектор-столбец есть вектор-столбец:
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                c += matrix[i][j];//сложение всех перемноженых элементов
            }
            vector[i] = c;
            c = 0;
        }
        cout << "Вектор C:| " << vector[0] << " |" << endl;
        for (int i = 1; i < m; i++) {
            cout << "         | " << vector[i] << " |" << endl;
        }
    }
    else {
        cout << "Не все элементы вектора B отрицательные." << endl;
    }
}


