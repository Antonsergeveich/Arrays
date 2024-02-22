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
#ifdef ONE
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	setlocale(LC_ALL, "");
	int decimal; //двоичное число
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {}; //этот массив будет хранить разряды двоичного числа
	int i = 0;
	while (decimal > 0)
	{
		bin[i] = decimal % 2; // получаем младший разряд двоичного числа
		i++;// переходим к следующему разряду
		decimal /= 2; //убираем младший двоичный разряд из числа
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
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
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
}
#endif // TWO
#ifdef THREE
#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
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
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
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
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	/*while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}*/
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
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
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	/*while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;*/
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
}
#endif // SIX
#ifdef SEVEN
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	/*while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;*/
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
}
#endif // SEVEN
#ifdef EIGHT
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Ввудите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	/*while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}*/
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
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
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	/*while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}*/
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
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
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	/*while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}*/
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
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
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	/*while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}*/
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
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
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	/*while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}*/
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
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
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	/*while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}*/
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
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
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	/*while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}*/
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
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
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	/*while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}*/
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
}
#endif // FIFTEEN
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	while (decimal > 0);
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	/*for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}*/
}