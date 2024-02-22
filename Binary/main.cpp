#include<iostream>
#include "main.h"
using namespace std;
//#define ONE
//#define TWO
void main()
{
	setlocale(LC_ALL, "");
#ifdef ONE
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
#endif // ONE
	int decimal;  //десятичное число
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {}; // Этот массив будет хранить разряды двоичного числа
	int i = 0;
#ifdef TWO
	while (decimal > 0)
	{
		bin[i] = decimal % 2; // получаем младший разряд двоичного числа
		i++; // переходим к следующему разряду
		decimal /= 2; //убираем младший двоичный разряд из числа
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
#endif // TWO
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;

}
	