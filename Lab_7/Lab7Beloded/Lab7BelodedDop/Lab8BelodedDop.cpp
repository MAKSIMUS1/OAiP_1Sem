#include <iostream>
#include <stdio.h>
//6. �������������� �������.

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");

    //1. � ������������������ �� n ����� ����� ����� � ������� �������� ����� ������ ���������.
    int n, chislo, summa = 0;
    printf("1. � ������������������ �� n ����� ����� ����� � ������� �������� ����� ������ ���������.\n");
    printf("������� ������ ������������������ n = ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("������� ����� =  ");
        scanf_s("%d", &chislo);
        if (chislo % 2 == 0) { 
            cout << "����� ������" << endl;
            summa += chislo;
        }
        else {
            cout << "����� ��������" << endl;
        }
    }
    printf("����� ������ ��������� ����� = %d\n", summa);

    //2. � ������������������ �� n ����� ����� ����� � ������� ���������� ����� ���������� �������������� ��������.
    int porydnomer = 0;
    printf("2. � ������������������ �� n ����� ����� ����� � ������� ���������� ����� ���������� �������������� ��������.\n");
    printf("������� ������ ������������������ n = ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("������� ����� �%d = ", i);
        scanf_s("%d", &chislo);
            if (chislo < 0) {
                cout << "����� �������������" << endl;
                porydnomer = i;
            }
            else {
                cout << "����� �������������" << endl;
            }
    }
    printf("����� ���������� �������������� �������� = %d\n", porydnomer);
    //3. � ������������������ �� n ������������ ����� ����� ���������� ���������, ������� ����� ����������� � ������������ ����������.
    int nomer_perv, nomer_vtoroy, kolichestvo_elementov;
    float ne_zeloe, min = 10000, max = 0;
    printf("3. � ������������������ �� n ������������ ����� ����� ���������� ���������, ������� ����� ����������� � ������������ ����������.\n");
    printf("������� ������ ������������������ n = ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("������� ����� �%d = ", i);
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
    printf("����� ������������ �������� = %d\n", nomer_vtoroy);
    printf("����������� �������� = %f\n", min);
    printf("����� ������������� �������� n = %d\n", nomer_perv);
    printf("������������ �������� = %f\n", max);
    kolichestvo_elementov = abs(nomer_perv - nomer_vtoroy) - 1;
    printf("���������� ��������� ����� ����������� � ������������ ����������= %d\n", kolichestvo_elementov);
}