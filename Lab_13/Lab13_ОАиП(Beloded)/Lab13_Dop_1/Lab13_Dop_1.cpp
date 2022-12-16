#include <cstring>
#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
    //DOP_1. В заданной последовательности слов найти все слова, имеющие заданное окончание.
    char t[10][20], okon[3], str[10][20];
    int i, i_2 = 0, i_3 = 0, j, n, proverka = 0, len;
    cout << "Input size (<=10): ";
    cin >> n;
    cout << "Okonchanie(2 bukvy): ";
    cin >> okon;
    cin.ignore(cin.rdbuf()->in_avail());
    for (i = 0; i < n; i++)
    {
        cout << "Input string #" << i+1 << ": ";
        gets_s(t[i]);
    }
    for (i = 0; i < n; i++) {
        len = strlen(t[i]);
        for (j = (len-1); j > (len - 3); j--) {
            if (t[i][j] == okon[1]) {
                proverka++;
            }
            if (t[i][j] == okon[0]) {
                proverka++;
            }
        }
        if (proverka == 2) {
            for (i_3 = 0; i_3 <= len; i_3++) {
                str[i_2][i_3] = t[i][i_3];
            }
            i_2++;
        }
        proverka = 0;
    }
    cout << "Slova c takim okonchaniem: \n";
    for (i = 0; i < i_2; i++)
    {
        cout << "#" << i+1 << ": " << str[i] << endl;
    }

}

