#include <iostream>

#include <string.h>

using namespace std;
char a[20];
int min = 20, k = 0, i;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Введите строку: ";
	for (i = 0; i < 20; i++)
	{
		cin >> a[i];
	}
	cout << endl;
	for (i = 0; i < 20; i++)
	{
		/*if (a[i] == a[i + 1])
		{
			if (min > k)
			{
				k++;
			}
		}
		else
		{
	
			min = k  ;
			k = 0;
			
		}
		*/
		int k = i;
		while (a[i] == a[i + 1]) i++;

		if ((i - k) < min)
		{
			min = (i - k + 1);
		}
	}
	cout << min << endl;
	system("pause");
}