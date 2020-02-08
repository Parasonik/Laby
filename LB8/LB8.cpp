//#include <iostream>
//#include <math.h>
//#include <iomanip>
//typedef double (*uf)(double, double, int&);
//void tabl(double, double, double, double, uf);
//double y(double, double, int&);
//double s(double, double, int&);
//using namespace std;
//int main()
//{
//	cout << setw(8) << "x" << setw(15) << "y(x)" << setw(10) << "k" << endl;
//	tabl(0.1, 0.9, 0.1, 0.00001, y);
//	cout << endl;
//	cout << setw(8) << "x" << setw(15) << "s(x)" << setw(10) << "k" << endl;
//	tabl(0.1, 0.9, 0.1, 0.00001, s);
//	return 0;
//}
//void tabl(double a, double b, double h, double eps, uf fun)
//{
//		int k = 0;
//	double sum;
//	for (double x = a; x < b + h/2; x += h)
//	{
//		sum = fun(x, eps, k);
//		cout << setw(8) << x << setw(15) << sum << setw(10) << k << endl;
//	}
//}
//double y(double x, double eps, int& k)
//{
//	return (sin(x))/x;
//}
//double s(double x, double eps, int& k) 
//{
//	double a, c, sum;
//	sum = a = 1;
//
//    c = x;
//	k = 1;
//	while (fabs(c) > eps)
//	{
//		c = ( x * x * (-1) ) / (2 * k + 1);
//		a *= c;
//		sum += a;
//		c *= (2 * k + 1);
//		k++;
//	}
//	return sum;
//}
#include <iostream>
using namespace std;
int n, m, f, i, j, k;
int main()
{
	int* a = new int[n];
	cout << "Введите количесвто элементов в первом массиве";
	cin >> n;
	int* b = new int[m];
	cout << "Введите количесвто элементов во втором массиве";
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите элемент массива ";
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cout << "Введите элемент массива ";
		cin >> b[i];
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
	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < m - i - 1; j++) {
			if (b[j] > b[j + 1]) {
				f = b[j];
				b[j] = b[j + 1];
				b[j + 1] = f;
			}
		}
	}
	int* c = new int[n + m];
	i = 0; 
	j = 0;
	k = 0;
	while (i < n && j < m)
	{
		if (a[i] < b[j])
		{
			c[k] = a[i];
			i++;
		}
		else 
		{
			c[k] = b[j];
			j++;
		}
		k++;
	}
	while (i < n)
	{
		c[k] = a[i];
		k++;
		i++;
	}
	while (j < m)
	{
		c[k] = b[j];
		k++;
		j++;
	}
	for (int i = 0; i < n + m; i++)
	{
		cout << c[i] << " ";
	}
	system("pause");
	return 0;
}