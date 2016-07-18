/*
	Exe_165: Cho mảng 1 chiều các số nguyên, hãy viết hàm tìm giá trị đầu tiên có chữ số đầu tiên là chữ số lẻ. Nếu k có trả về 0
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

bool Check(int n)
{
	while(n >= 10 )
	{
		n /= 10;
	}
	if(n % 2 != 0)
	{
		return true;
	}
	return false;
}

int Result(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(Check(a[i]))
		{
			return a[i];
		}
	}
	return 0;
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