#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	double x, y, f = 0, s = 0;

	int k;
	cout << "Введите x " ; cin >> x;
	cout << "Введите y " ; cin >> y;
	cout << "Выберите f: 1 - sh(x), 2 - x^2, 3 - exp(x) "; cin >> k ;
	switch (k) {
	case 1: f = sinh(x); break;
	case 2: f = pow(x, 2); break;
	case 3: f = exp(x); break;
	default: cout << "Не выбрана функция"; return 1;
	}
	if (x > y) s = pow(fabs(f - y), 1 / 3.0) + tan(f);
	else
		if (x < y) s = pow((y - f), 3) + cos(f);
		else
			if (x = y) s = pow(y + f, 2) + x*x*x;
	cout << "Результат = " << s << endl; 
	system("pause");
	return 0;
}
