﻿#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#define ONE
void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE] = {};
	//вывод значений элементов массива с клавиатуры
	cout << "Введите значения элементов массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
#ifdef ONE
	//вывод элементов массива в прямом порядке
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;
	//вывод элементов массива в обратном порядке
	cout << "Элементы массива в обратном порядке: ";
	/*for (int i = SIZE - 1; i != -1; i--)
	{
		cout << arr[i] << "\t";
	}*/
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;
	//сумма всех элементов массива
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << endl;
	//вычисляем среднее-арифметическое элементов массива
	double s = 0;
	double sa;
	for (int i = 0; i < SIZE; i++)
	{
		s = s + arr[i];
	}
	sa = s / SIZE;
	//cout << (double)sum / SIZE << endl;
	cout << "Среднее арифметическое элементов массива: " << sa << endl;
	cout << endl;

	//находим минимальное и максимальное значение элементов и выводим их на экран
	int x = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		x = arr[i];
	}
	for (int i = 1; i < SIZE; i++)
	{
		if (x > arr[i])
		{
			x = arr[i];
		}
	}
	cout << "Элемент массива с наименьшим значением: " << x << "\t";
	cout << endl;
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (x < arr[i])
		{
			x = arr[i];
		}
	}
	cout << "Элемент массива с наибольшим значением: " << x << "\t";
	cout << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
#endif 
}