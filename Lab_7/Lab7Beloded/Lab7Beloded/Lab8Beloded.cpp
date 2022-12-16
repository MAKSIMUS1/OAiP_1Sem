#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    float q, t = 0.45, x[6] = { 1.1, 6.2, 3, -4, 6, 1 };
    q = t;
    for (int i = 0; i <= 5; i++) {
        q += ((x[i] + 1) / x[i]);
        printf("x №%d= %.1f\t\t", i + 1, x[i]);
        printf("Промежуточное q = %f\n", q);
    }
    printf("Итоговое q = %f\n", q);
}