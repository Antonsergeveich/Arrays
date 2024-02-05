#include<iostream>
using namespace std;
using std::cin;
void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;
	const int SIZE = 5;
    int arr[SIZE] = {};
	cout << " ¬ведите значени€ элементов массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
	    cout << arr[i] << "\t";
	}
	cout << endl;
}