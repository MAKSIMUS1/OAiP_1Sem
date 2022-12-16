#include <cstring>
#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	//1. Написать программу, реализующую вставку подстроки St длиной n1 в строку S с позиции но-мер n2.
    char S[50], St[20];
    int i, j = 0, n, n1, n2;
    cout << "Input string S: ";
    cin >> S;
    cout << "Input string St: ";
    cin >> St;
    cout << "Position n2: ";
    cin >> n2;
    n = strlen(S);
    n1 = strlen(St);   
    for (i = n2; i < (n2 + n1); i++) {
        S[i+1] = S[i];
        S[i] = St[j];
        j++;
    }
    cout << S;
}

