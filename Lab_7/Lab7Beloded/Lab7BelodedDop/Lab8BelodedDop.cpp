#include <iostream>
#include <stdio.h>
//6. Дополнительные задания.

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");

    //1. В последовательности из n целых чисел найти и вывести значение суммы четных элементов.
    int n, chislo, summa = 0;
    printf("1. В последовательности из n целых чисел найти и вывести значение суммы четных элементов.\n");
    printf("Введите размер последовательности n = ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Введите число =  ");
        scanf_s("%d", &chislo);
        if (chislo % 2 == 0) { 
            cout << "Число чётное" << endl;
            summa += chislo;
        }
        else {
            cout << "Число НЕчётное" << endl;
        }
    }
    printf("Сумма чётных элементов равна = %d\n", summa);

    //2. В последовательности из n целых чисел найти и вывести порядковый номер последнего отрицательного элемента.
    int porydnomer = 0;
    printf("2. В последовательности из n целых чисел найти и вывести порядковый номер последнего отрицательного элемента.\n");
    printf("Введите размер последовательности n = ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Введите число №%d = ", i);
        scanf_s("%d", &chislo);
            if (chislo < 0) {
                cout << "Число отрицательное" << endl;
                porydnomer = i;
            }
            else {
                cout << "Число положительное" << endl;
            }
    }
    printf("Номер последнего отрицательного элемента = %d\n", porydnomer);
    //3. В последовательности из n вещественных чисел найти количество элементов, стоящих между минимальным и максимальным значениями.
    int nomer_perv, nomer_vtoroy, kolichestvo_elementov;
    float ne_zeloe, min = 10000, max = 0;
    printf("3. В последовательности из n вещественных чисел найти количество элементов, стоящих между минимальным и максимальным значениями.\n");
    printf("Введите размер последовательности n = ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Введите число №%d = ", i);
        scanf_s("%f", &ne_zeloe);
        if (ne_zeloe > max) {
            max = ne_zeloe;
            nomer_perv = i;
        }
        if (ne_zeloe < min) {
            min = ne_zeloe;
            nomer_vtoroy = i;
        }
    }
    printf("Номер минимального значение = %d\n", nomer_vtoroy);
    printf("Минимальное значение = %f\n", min);
    printf("Номер максимального значение n = %d\n", nomer_perv);
    printf("Максимальное значение = %f\n", max);
    kolichestvo_elementov = abs(nomer_perv - nomer_vtoroy) - 1;
    printf("Количество элементов между минимальным и максимальным значениями= %d\n", kolichestvo_elementov);
}