#include<iostream>
#include "main.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int chislo = 0, x = 0, c = 0, y = 0, n = 0; 
    cout << "Введите число: ";
	cin >> chislo;
	x = chislo;
	while (x >= 1)
	{
		y = x;
		x = x / 2;
		c = (x * 2 + 1 == y ? 1 : 0);
		cout << c << "\t";
		n++;
	}
	cout << endl;
	
}
	