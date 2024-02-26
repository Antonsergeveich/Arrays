#include<Windows.h>
#include<iostream>
using namespace std;
//#define ONE
#define TWO
void main()
{
	setlocale(LC_ALL, "");
#ifdef ONE
	cout << endl;
	const int SIZE = 10;
	int arr[SIZE] = { 0,1,1,2,3,5,8,13,21,34 };
	int n = 1; // на сколько элементов сдвигаем массив
	for (int i = 0; i < SIZE; i++)
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[i] << "\t";
		}
		for (int i = 0; i <= SIZE - 1; i++)
		{
			//cout << arr[i] << "\t";
			arr[i] = arr[(i + n) % SIZE];
		}
		cout << endl;
	}
#endif // ONE
#ifdef TWO
	const int  n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{

		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			//arr[i] - текущий элемент
			//arr[i+1] - следующий элемент;
			//arr[i-1] - предыдущий элемент;
			arr[i] = arr[i + 1];
		} 
		arr[n - 1] = buffer;
		system("CLS");//функция system вызывает любую команду windows
		//команда CLS очищае окно консоли
	    for (int i = 0; i < n; i++)
	    {
		cout << arr[i] << "\t";
	    }
	    cout << endl;
	    Sleep(1000);// функция sleep(...) приостанавливает выполнение программы на заданный промежуток времени
		//промежуток времени задаётся в милисекундах
	}
#endif // TWO

}
	

