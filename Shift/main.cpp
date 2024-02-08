#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << endl;
	const int SIZE = 10;
	int arr[SIZE] = {0,1,1,2,3,5,8,13,21,34};
	int n = 1; // на сколько элементов сдвигаем массив
	for (int i = 0; i < SIZE ; i++)
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[i] << "\t";
		}
		for (int i = 0; i <= SIZE - 1; i++)
		{
			cout << arr[i] << "\t";
			arr[i] = arr[(i + n) % SIZE];
		}
			cout << endl;
	}
}