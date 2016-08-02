/*
	Exe_309: Cho mảng thực a. Hãy tạo mảng b, với b[i] = tổng các phần tử lân cận với a[i] trong mảng a
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

void Result(int a[], int n)
{
	int b[100];
	b[0] = a[0] + a[1];
	
	for(int i = 1; i < n - 1; i++)
	{
		b[i] = a[i - 1] + a[i + 1];		
	}
	b[n - 1] = a[n - 1] + a[n - 2];
	Output(b, n);
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
	
	return 0;
}