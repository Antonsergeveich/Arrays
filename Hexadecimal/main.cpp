#include<iostream>
using namespace std;

void main()
{
	//for (int i = 0; i < 256; i++)cout << i << "\t" << (char)i << endl;//Вывод символов ASCII
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 8;
	char hex[n] = {};
	int i = 0;
	//for (; decimal; hex[i++] = decimal % 16, decimal /= 2);
	/*for (; decimal; hex[i++] = decimal % 16, decimal >>= 4);
	for(--i; i >= 0; i--)
	{
		cout << char(hex[i] < 10 ? hex[i] + '0' : hex[i] + 'A' -10);
	}
	cout << endl;*/
	for (; decimal; hex[i++] = decimal &  15, decimal >>= 4);
	for(--i; i >= 0; i--)
	{
		//cout << char(hex[i] < 10 ? hex[i] + '0' : hex[i] + 'A' -10);
		cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	}
	cout << endl;
	short x = 0;
	cout << "Введите значение: ";  cin >> i;
	x = i & 1;
	cout << (x == 0 ? "Чётное" : "Не чётное");
	cout << endl;
	cout << (128 & 1); // AND на чётность, если побитово одно число умножить на один 1 и результат будет 1 то число не чётное, если ноль 0 то число чётное
	cout << endl;
	cout << (123 ^ 123); // XOR на равенство чисел, равны числа или нет, если XOR двух чисел равно нулю то числа равны, если  единицы 1 то не равны
}