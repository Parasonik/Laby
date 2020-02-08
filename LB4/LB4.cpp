	#include <iostream>
#include <math.h>
using namespace std;
int n, f;
int a[6];
int main()
{
	setlocale(LC_ALL, "Rus");
	n = 6;
	for (int i = 0; i < n ; i++)
	{
		cout << "Введите элемент массива ";
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				f = a[j];
				a[j] = a[j + 1];
				a[j + 1] = f;
			}
		}
	}


	for (int i = 0; i < n; i++) 
	{
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}