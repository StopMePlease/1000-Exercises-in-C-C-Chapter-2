/*
	Exe_160: Cho mảng 1 chiều các số thực hãy viết hàm tìm giá trị âm cuối cùng lớn hơn giá trị -1. Nếu k có thì trả về 0
*/
#include <iostream>

using namespace std;

void Input(double a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

void Output(double a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "      ";
	}
	cout << endl;
}

double Result(double a[], int n)
{
	for(int i = n - 1; i >= 0; i--)
	{
		if(a[i] < 0 && a[i] > -1)
			return a[i];
	}
	return 0;
}

int main()
{
	double a[100];
	int n;
	cout << "Input n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);
	double kq = Result(a, n);
	cout << kq;

	return 0;
}