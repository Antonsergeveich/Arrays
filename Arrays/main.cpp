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
	//����� �������� ��������� ������� � ����������
	cout << "������� �������� ��������� �������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	//����� ��������� ������� � ������ �������
	cout << "�������� ������� � ������ �������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;
	//����� ��������� ������� � �������� �������
	cout << "�������� ������� � �������� �������: ";
	for (int i = SIZE - 1; i != -1; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;
	//����� ���� ��������� �������
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	cout << "����� ���� ��������� �������: " << sum << endl;
	cout << endl;
	//��������� �������-�������������� ��������� �������
	double s = 0;
	double sa;
	for (int i = 0; i < SIZE; i++)
	{
		s = s + arr[i];
	}
	sa = s / SIZE;
	cout << "������� �������������� ��������� �������: " << sa << endl;
	cout << endl;

	//������� ����������� � ������������ �������� ��������� � ������� �� �� �����
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
	cout << "������� ������� � ���������� ���������: " << x << "\t";
	cout << endl;
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (x < arr[i])
		{
			x = arr[i];
		}
	}
	cout << "������� ������� � ���������� ���������: " << x << "\t";
	cout << endl;
#endif 

}