#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//		����� ����������:
	for (int i = 0; i < n; i++)
	{
		//arr[i] - ��������� �������
		bool met_before = false;	//������������, ��� ��������� �������� ����� �� �����������,
		//�� ��� ����� ����������:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;				//break - ��������� ������� �������� � ��� �����������.
			}
		}
		if (met_before)continue;	//continue - ��������� ������� ��������, � ��������� � ���������.

		int counter = 0;	//������� ����������
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])counter++;
		}
		//if (counter > 1) printf("�������� %i ����������� %i ���\n", arr[i], counter);
		if (counter) printf("�������� %i ����������� %i ���\n", arr[i], counter);
		//https://legacy.cplusplus.com/reference/cstdio/printf/
//		if (counter)cout << "�������� " << arr[i] << " ����������� " << counter << " ���" << endl;
//		if (counter)cout << "Value " << arr[i] << " repeats " << counter << " times" << endl;
	}
}