#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void stroki(); //прототип

int main(void)
//1. Дан двумерный массив, состоящий из N строк и М столбцов, а также число number.
//   Проверить, находится ли это число  на главной диагонали.
{
    setlocale(LC_CTYPE, "Russian");
    int choice;
    do
    {
        cout << "Выберите вариант работы" << endl;
        cout << "1 - строки" << endl;
        cout << "2 - выход" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            stroki();
            break;
        case 2:  break;
        }
    } while (choice != 2);
}
void stroki()
{
    //Написать программу, которая вводит ряд слов и выводит те из них, которые начинаются с буквы «b».
    int i, N_strok, k = 1;
    cout << "Введите количество слов = ";
    cin >> N_strok;
    char** stroki;
    stroki = new char*[N_strok];
    for (i = 0; i < N_strok; ++i) {
        stroki[i] = new char[20];
        cout << "Введите слово №" << i + 1 << ": ";
        cin >> stroki[i];
    }

    for (i = 0; i < N_strok; ++i) {// проверка на "b"
        if (stroki[i][0] == 'b') {
            cout <<"Вот слово начинающееся на b №" << k << ": " << stroki[i] << endl;
            k++;
        }
    }
        for (i = 0; i < N_strok; ++i)
            delete[] stroki[i];
    delete[] stroki;
}