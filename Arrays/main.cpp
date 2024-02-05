#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;

    const int SIZE = 5;
	cout << "¬ведите значение массива: ";
	int n = 0;
	{
		for (int i = 0; i < SIZE; i++)
			cin >> n;
	}
	int arr[SIZE] = {n};
	cout << int() << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
	cout << arr[i] << "\t";
	}
	cout << endl;
}