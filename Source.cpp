#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	const int SIZE = 5;
	int AR[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\t\tВведите элемент массива\n";
		cin >> AR[i];
	}
	cout << "\n\n";
	cout << "\tВывод элементов массива в обратном порядке";
	cout << endl;
	for (int j = 4; j >= 0; j--)
	{
		cout << AR[j] << endl;
	}
	cout << endl;
	cout << "\t Вычисляем сумму элементов массива\n";
	int SUM = 0;
	for (int i = 0; i < SIZE; i++)
	{
		SUM += AR[i];

	}
	cout << SUM;
	cout << endl;

	cout << "\t Вычисляем среднее арифметическое элементов массива\n";
	int SA = 0;
	SA = SUM / SIZE;
	cout << "\t Среднее арифметическое = " << SA;
	cout << endl;
	cout << "\t Находим Max  и  Min  значения элементов массива\n";
	cout << endl;
	int MAX = AR[0];
	int MIN = AR[0];
	
	


	for (int i = 1; i < SIZE; i++)
	{
				if (MIN > AR[i])
			
			MIN = AR[i];
		
		if (MAX < AR[i])
			
			MAX = AR[i];
	}
	
	cout << "Max = " << MAX << "\n\n";
	cout << "Min = " << MIN << "\n\n";

}