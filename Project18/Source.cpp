#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
using namespace std;
void task2()
{

	printf("\n����� � ������\n");
	printf("\n�������� ������� � �������������� �� � �������� ���������. ������� �������� ������ � ���������� ��������� �� ���������. ��������� �� ��������� ����������, ����� �������� ���������� ������ � �������� �� ��� ����������� ��� ���������� ������ ����� ������.\n");

}
int func2(int a[], int s, int e,int t)
{
	if (e > t)
		return 0;
	int mid = (e + t) / 2; // ���� �������� �������
	if (s == a[mid]) {  // ���� �������� ���� ����� ��������
		return mid;     // �� ����� ��������� �������,
		           // ������� �� �����
	}
	if (s< a[mid])     // ���� ������� �������� ���� ������ ��������� ��������
		t = mid - 1;  // ������� ������ �������, ��������� ����� � ����� �����
	else                  // �����
		e = mid + 1;   // ������� ����� �������, ��������� ����� � ������ �����

	 func2(a, s, e, t);
	

}
void func1(int a[])
{
	for (size_t i = 0; i <10; i++)
	{
	
		
			a[i] = -10 + rand() % 20;
			cout << a[i]<<endl;
	}	

	int h;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 8; j >= i; j--)
		{
			if (a[j] > a[j + 1])
			{
				h = a[j];
				a[j] = a[j + 1];
				a[j + 1] = h;


			}
		}
	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
}
void task1()
{
	
	int a[10] = { 0 };
	int e = 0;
	int s;
	int t = 10;

	func1(a);
	cin >> s;
	cout << func2(a, s, e, t) << endl;
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;

		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}