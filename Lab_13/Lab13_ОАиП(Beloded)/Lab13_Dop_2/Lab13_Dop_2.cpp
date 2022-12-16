#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    //DOP_3.	Из заданного предложения удалить те слова, которые уже встречались в предложении раньше.
    string str/* = "Real Madrid Champions of Spain of"*/;
    getline(cin, str);
    string probel = " ", s2;
    int i = 0, n = 0, j = 0, i_2 = 0;
    char t[20][20];
    int size = str.size();
    do{
        n = str.rfind(probel); // ищем позицию пробела
        s2.assign(str, (n + 1), (size - n - 1)); //выделяем это слово после пробела
        str.erase(n, (size - n));// удаляем пробел так что бы осталось "primer ladno" "primer"
        for (j = 0; j <= s2.size(); j++) {
            t[i_2][j] = s2[j];
        }
        i_2++;
        size = str.size();
        n = str.rfind(probel);
    } while ((size > 0) && (n != (-1)));
    //
    for (j = 0; j <= str.size(); j++) {
        t[i_2][j] = str[j];
    }
    i_2++;
    //
    for (i = 0; i < i_2; i++) {
        puts(t[i]);
    }
}