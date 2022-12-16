#include <cstring>
#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
    //2. Дана строка, состоящая из групп нулей и единиц. Подсчитать количество символов в самой длинной группе. 
    int i, len, kol_nul = 0, kol_ed = 0, max = 0;
    char str[20];
    int kolichestvo[21];
    cout << "Input string: ";
    cin >> str;
    len = strlen(str);
    for (i = 0; i <= len; i++) {
        if (*(str+i) == '0') {
            kol_ed = 0;
            kol_nul++;
            *(kolichestvo+i) = kol_nul;
        }
        if(*(str+i) == '1') {
            kol_nul = 0;
            kol_ed++;
            *(kolichestvo+i) = kol_ed;
        }
    }
    for (i = 0; i <= 25; i++) {
        if (*(kolichestvo+i) >= max) {
            max = *(kolichestvo+i);
        }
    }
    printf("Naibolshee = %d", max);

    
}
