#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, h, x, y, s, p, n;
	int i;
	cout << "Введите a " << endl;
	cin >> a;
	cout << "Введите b" << endl;
	cin >> b;
	cout << "Введите n" << endl;
	cin >> n;
	h = (b - a) / 10.0;
	x = a;
	do
	{
		
		s = p = 1;
		for (i = 1; i <= n; i++)
		{
			p *= (-1) * x * x /2.0/i/(2.0*i -1.0);
			s += p;
		}
		y = cos(x);
		cout << fixed;
		cout.precision(4);
		cout << setw(15) << "x= " << x << setw(15) << "Y(x)= " << y << setw(15) << "S(x)= " << s << endl;
		x += h;
	} while (x <= b );
	cout << endl;
	system("pause");
}