#include<iostream>
using namespace std;

void main()
{
	//for (int i = 0; i < 256; i++)cout << i << "\t" << (char)i << endl;//����� �������� ASCII
	setlocale(LC_ALL, "");
	int decimal;
	cout << "������� ���������� �����: "; cin >> decimal;
	const int n = 8;
	char hex[n] = {};
	int i = 0;
	//for (; decimal; hex[i++] = decimal % 16, decimal /= 2);
	/*for (; decimal; hex[i++] = decimal % 16, decimal >>= 4);
	for(--i; i >= 0; i--)
	{
		cout << char(hex[i] < 10 ? hex[i] + '0' : hex[i] + 'A' -10);
	}
	cout << endl;*/
	for (; decimal; hex[i++] = decimal &  15, decimal >>= 4);
	for(--i; i >= 0; i--)
	{
		//cout << char(hex[i] < 10 ? hex[i] + '0' : hex[i] + 'A' -10);
		cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	}
	cout << endl;
	short x = 0;
	cout << "������� ��������: ";  cin >> i;
	x = i & 1;
	cout << (x == 0 ? "׸����" : "�� ������");
	cout << endl;
	cout << (128 & 1); // AND �� ��������, ���� �������� ���� ����� �������� �� ���� 1 � ��������� ����� 1 �� ����� �� ������, ���� ���� 0 �� ����� ������
	cout << endl;
	cout << (123 ^ 123); // XOR �� ��������� �����, ����� ����� ��� ���, ���� XOR ���� ����� ����� ���� �� ����� �����, ����  ������� 1 �� �� �����
}