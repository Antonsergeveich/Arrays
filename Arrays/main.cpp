#include<iostream>
using namespace std;
using std::cout;
#define ONE
void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;
#ifdef ONE
	const int SIZE = 5;
	int arr[SIZE] = {};
	//вывод значений элементов массива с клавиатуры
	cout << "¬ведите значени€ элементов массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	//вывод элементов массива в пр€мом пор€дке
	cout << "Ёлементы массива в пр€мом пор€дке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;
	//вывод элементов массива в обратном пор€дке
	cout << "Ёлементы массива в обратном пор€дке: ";
	for (int i = SIZE - 1; i != -1; i--)
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
	cout << "—умма всех элементов массива: " << sum << endl;
	cout << endl;
	//вычисл€ем среднее-арифметическое элементов массива
	double s = 0;
	double sa;
	for (int i = 0; i < SIZE; i++)
	{
		s = s + arr[i];
	}
	sa = s / SIZE;
	cout << "—реднее арифметическое элементов массива: " << sa << endl;
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
	cout << "Ёлемент массива с наименьшим значением: " << x << "\t";
	cout << endl;
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (x < arr[i])
		{
			x = arr[i];
		}
	}
	cout << "Ёлемент массива с наибольшим значением: " << x << "\t";
	cout << endl;
#endif 

}