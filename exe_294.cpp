/*
	Exe_294: Liệt kê tất cả các mảng con có độ dài lớn hơn 2 trong mảng nguyên
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
	cout << "Cac mang con" << endl;
	int num = 0;
	while(num < n)
	{
		int temp = num + 1;
		while(temp < n)
		{
			cout << a[num] << "   " << a[temp] << endl;
			temp++;
		}
		num++;
	}
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