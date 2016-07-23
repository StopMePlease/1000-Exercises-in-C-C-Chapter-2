/*
	Exe_245: Kiểm tra mảng nguyên có tồn tại toàn số chẵn. Không tồn tại -> 0, có tồn tại -> 1
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

int Result(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int a[100];
	int n;
	cout << "Input n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);

	int kq = Result(a, n);
	cout << kq;	
	
	return 0;
}