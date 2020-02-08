#include <iostream>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	
	char st[50];
	for (int j = 0; j < 50; j++)
	{
		cin >> st[j];
	}
	cout << endl;
	
	
	/*char min = 100, min_pos = 0;*/

//for (int i = 0; st[i] != '\0'; i++)
//{
//	k = i;
//	while (st[i] == st[i + 1] && st[i] != '\0') i++;
//	s = abs((k + 1) - i);
//	if (s < min) {
//		min = s; min_pos = k;
//	}
//}
	int shortGroup = strlen(st);
	int k = 1, min = shortGroup, end = k;
	for (int i = 0; i < shortGroup; i++)
	{
		if (st[i] == st[i + 1])
		{
			++k;
			
		}
		else
		{
			if (min > k)
			{
				min = k;
				end = i - 1;
			}
			k = 1;
			
		}

	}
	//end сохранит индекс последего элемента
	//искомой группы
	/*for (k = end; k > 0; --k) 
	{
		cout << st[k];
		if (st[k] != st[k - 1])
			break;
	}*/
	cout << min;
return 0;
}