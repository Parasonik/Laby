#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int N, M, i, k, j=0, s=0, n;


void main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Ведите число строк " << endl;
	cin >> N; // строки
	cout << "Ведите число столбцов " << endl;
	cin >> M; // столбцы
	int** arr = new int* [N];
	for (i = 0; i < N; i++)
	{
		arr[i] = new int[M];
	}

	for (i = 0; i < N; i++)
	{
		for (k = 0; k < M; k++)
		{
			cout << "Введите элемент массива" << endl;
			cin >> arr[i][k];
		}
	}

		for (i = 0; i < M; i++)

		{
			for (n = 0; n < N; n++)

			{


				s += arr[n][i];
			}

			for (k = 0; k < N; k++)

			{
				
				if (arr[k][i] > (s - arr[k][i]))
				{
					j++;
					
				}
				
				
			}
			s = 0;
		}


	cout << "Матрица:  " << endl;
	for (i = 0; i < N; i++)
	{
		for (k = 0; k < M; k++)
		{
			
			cout << "\t" << arr[i][k];
		}
		cout << endl;
	}
	cout << "Количество особых элементов: " << j << endl;
	for (i = 0; i < N; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	system ("pause");
}