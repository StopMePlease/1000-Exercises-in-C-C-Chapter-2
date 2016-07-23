/*
	exe_260: Cho 2 mảng a, b. CHo biết mảng b có phải là hoàn vị của mảng a hay không?
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

void Input2(int b[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "b[" << i << "]: ";
		cin >> b[i];
	}
}

void Output2(int b[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << b[i] << "      ";
	}
	cout << endl;
}

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Result(int a[], int n)
{
	for(int i = 0; i < n / 2; i++)
	{
		Swap(a[i], a[n - i - 1]);
	}
}

int main()
{
	int a[100], b[100];
	int n, m;
	cout << "Input n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);

	cout << "Input m: ";
	cin >> m;
	Input2(b, m);
	Output2(b, m);

	Result(a, n);
	Output(a, n);

	for(int i = 0; i < n; i++)
	{
		if(a[i] != b[i])
		{
			cout << "not equal";
			return 0;
		}
	}

	cout << "equal";
	return 0;
}