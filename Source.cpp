#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	const int SIZE = 5;
	int AR[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\t\t������� ������� �������\n";
		cin >> AR[i];
	}
	cout << "\n\n";
	cout << "\t����� ��������� ������� � �������� �������";
	cout << endl;
	for (int j = 4; j >= 0; j--)
	{
		cout << AR[j] << endl;
	}
	cout << endl;
	cout << "\t ��������� ����� ��������� �������\n";
	int SUM = 0;
	for (int i = 0; i < SIZE; i++)
	{
		SUM += AR[i];

	}
	cout << SUM;
	cout << endl;

	cout << "\t ��������� ������� �������������� ��������� �������\n";
	int SA = 0;
	SA = SUM / SIZE;
	cout << "\t ������� �������������� = " << SA;
	cout << endl;
	cout << "\t ������� Max  �  Min  �������� ��������� �������\n";
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