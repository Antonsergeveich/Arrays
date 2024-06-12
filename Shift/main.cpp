#include<Windows.h>
#include<iostream>
using namespace std;
using std::cout;
//#define LEFT
#define RIGHT
void main()
{
	setlocale(LC_ALL, "");
	cout << endl;

#ifdef LEFT
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
		//команда CLS очищает окно консоли
	    for (int i = 0; i < n; i++)
	    {
		cout << arr[i] << "\t";
	    }
	    cout << endl;
	    Sleep(1000);// функция sleep(...) приостанавливает выполнение программы на заданный промежуток времени
		//промежуток времени задаётся в милисекундах
	}
#endif // LEFT

#ifdef RIGHT
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
		int buffer = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // RIGHT

}

	

