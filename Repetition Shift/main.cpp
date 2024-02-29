#include<iostream>
#include<Windows.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
//#define ONE
//#define TWO
//#define TREE
//#define FOUR
//#define FIVE
//#define SIX
//#define SEVEN
//#define EIGHT
//#define NINE
//#define TEN
//#define ELEVEN
//#define TWELVE
//#define THIRTEEN
//#define FOURTEEN
//#define FIFTEEN
//#define SIXTEEN
//#define SEVENTEEN
//#define EIGHTEEN
//#define NINETEEN
#define TWENTY

void main()
{
	setlocale(LC_ALL, "");
#ifdef ONE
	const int n = 10;
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
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // ONE
#ifdef TWO
	const int n = 10;
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
			//arr[i]-тeкущий элемент
			//arr[i-1]-предидущий элемент
			//arr[i+1]-следующий элемент
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // TWO
#ifdef TREE
	const int n = 10;
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
		for ( int i = 0; i < n; i++)
		{
			//arr[i]-текущий элемент
			//arr[i-1]-предыдущий элемент
			//arr[i+1]-следующий элемент
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // TREE
#ifdef FOUR
	const int n = 10;
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
			//arr[i]-текущий элемент массива
			//arr[i-1]-предыдущий элемент массива
			//arr[i+1]-следующий элемент массива
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // FOUR
#ifdef FIVE
	const int n = 10;
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
			//arr[i]-текущий элемент массива
			//arr[i-1]-предыдущий элемент массива
			//arr[i+1]-следующий элемент массива
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // FIVE
#ifdef SIX
	const int n = 10;
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
			//arr[i]-текущий элемент массива
			//arr[i-1]- предыдущий элемент массива
			//arr[i+1]-следующий элемент массива
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // SIX
#ifdef SEVEN
	const int n = 10;
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
			//arr[i]-текущий элемент
			//arr[i-1]-предыдущий элемент
			//arr[i+1]-следующий элемент
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // SEVEN
#ifdef EIGHT
	const int n = 10;
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
			//arr[i]-текущий элемент массива
			//arr[i-1]-предидущий элемент массива
			//arr[i+1]-следующий элемент массива
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // EIGHT
#ifdef NINE
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			//arr[i]-текущий элеменнт массива
			//arr[i-1]-предыдущий элемент массива
			//arr[i+1]-следующий элемент массива
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // NINE
#ifdef TEN
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			//arr[i]-текущий элемент массива
			//arr[i-1]-предыдущий элемент массива
			//arr[i+1]-следующий элемент массива
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // TEN
#ifdef ELEVEN
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // ELEVEN
#ifdef TWELVE
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // TWELVE
#ifdef THIRTEEN
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // THIRTEEN
#ifdef FOURTEEN
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // FOURTEEN
#ifdef FIFTEEN
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // FIFTEEN
#ifdef SIXTEEN
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // SIXTEEN
#ifdef SEVENTEEN
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // SEVENTEEN
#ifdef EIGHTEEN
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // EIGHTEEN
#ifdef NINETEEN
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // NINETEEN
#ifdef TWENTY
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // TWENTY


}