#include <iostream>
#include <ctime>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	//	3. Найти в массиве наибольшее число подряд идущих одинаковых элементов.
	using namespace std;
	const int N = 10000;
	int i, j = 0, sz, A[N], nomer_ulementa = 1, naibolshee_chislo_podruyd = 1, massiv_naibolshih_podryud[N], size_of_massiv, maksimum = 1;
	int rmn = 0, rmx = 3;
	printf("Введите размер массива(меньше 10000): ");
	scanf_s("%d", &sz);
	printf("Массив А:\n");
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		 A[i] = rand() % rmx; 
		printf("Номер элемента №%d %d\n", nomer_ulementa, A[i]);
		nomer_ulementa++;
	}
	for (i = 1; i < sz; i++)
	{
		
		if (A[i] == A[i - 1]) {
			naibolshee_chislo_podruyd++;
		}
		else {
			massiv_naibolshih_podryud[j] = naibolshee_chislo_podruyd;
			naibolshee_chislo_podruyd = 1;
			j++;
		}
	}
	size_of_massiv = j;
	for (j = 0; j < size_of_massiv; j++) {
		if (massiv_naibolshih_podryud[j] > maksimum) {
			maksimum = massiv_naibolshih_podryud[j];
		}
	}
	printf("Наибольшее число подряд идущих одинаковых элементов = %d\n", maksimum);
}