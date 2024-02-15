//#define ONE
//#define TWO
//#define THREE
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
#ifdef ONE
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void nain()
{

	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите значения элементов массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: " << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
    cout << "Среднее арифметическое элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минтмальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}
#endif // ONE
#ifdef TWO
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите значения элементов массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}
#endif // TWO
#ifdef THREE
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите значения элементов массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое всех элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // THREE
#ifdef FOUR
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // FOUR
#ifdef FIVE
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // FIVE
#ifdef SIX
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	cout << "Введите элементы массива: ";
	const int SIZE = 5;
	int arr[SIZE] = {};
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое всех элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // FIVE
#ifdef SEVEN
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое всех элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // SEVEN
#ifdef EIGHT
#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое всех элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}

#endif // EIGHT
#ifdef NINE
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элеменмты массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое всех элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // NINE
#ifdef TEN
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое всех элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // TEN
#ifdef ELEVEN
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // ELEVEN
#ifdef TWELVE
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое всех элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // TWELVE
#ifdef THIRTEEN
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое всех элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // THIRTEEN
#ifdef FOURTEEN
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // FOURTEEN
#ifdef FIFTEEN
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	cout << "Введите элементы массива: ";
	const int SIZE = 5;
	int arr[SIZE] = {};
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обрвтном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // FIFTEEN
#ifdef SIXTEEN
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое всех элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // SIXTEEN
#ifdef SEVENTEEN
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	cout << "Hello Arrays" << endl;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {};
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << min << endl;
	cout << "Максимальное значение элементов массива: " << max << endl;
}
#endif // SEVENTEEN
