/*
	Exe_226: Đếm số lượng các phần tử kề nhau đều là chẵn
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
	int dem = 0;
	if(a[1] % 2 == 0 && a[0] % 2 == 0)
	{
		dem++;
	}
	if(a[n - 2] % 2 == 0 && a[n - 1] % 2 == 0)
	{
		dem++;
	}
	for(int i = 1; i < n - 1; i++)
	{
		if((a[i + 1] % 2 == 0 || a[i - 1] % 2 == 0) && a[i] % 2 == 0)
		{
			dem++;
		}
	}
	return dem;
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