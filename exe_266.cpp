/*
	Exe_266: Thêm 1 phần tử có giá trị x vào mảng tại vị trí k
*/
#include <iostream>
#include <cmath>

using namespace std;

void Input(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

void Output(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "      ";
	}
	cout << endl;
}

void Result(int a[], int &n)
{
	int x, pos;
	cout << "Element added: ";
	cin >> x;
	cout << "Position: ";
	cin >> pos;
	pos--;
	for(int i = n; i >= pos; i--)
	{
		a[i] = a[i - 1];		
	}
	a[pos] = x;
	n++;
}

int main()
{
	int a[100];
	int n;
	cout << "Input n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);

	Result(a, n);
	Output(a, n);

	return 0;
}