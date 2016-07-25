/*
	Exe_271: Xóa phần tử có chỉ số k trong mảng
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
	int x;
	cout << "Position need deleted: ";
	cin >> x;
	for(int i = x - 1; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

int main()
{
	int a[100];
	int n = 0;
	cout << "Input n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);
	Result(a, n);
	Output(a, n);

	return 0;
}