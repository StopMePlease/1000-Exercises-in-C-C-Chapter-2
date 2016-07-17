/*
	Exe_159: Cho mảng 1 chiều các số thực hãy tìm giá trị đầu tiên lớn hơn giá trị x. Nếu k có thì trả về 0
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

double Result(double a[], int n, double x)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] > x)
		{
			return a[i];
		}
	}
	return 0;
}

int main()
{
	double a[100], x;
	int n;
	cout << "Input n: ";
	cin >> n;
	cout << "Input x: ";
	cin >> x;
	Input(a, n);
	Output(a, n);
	double kq = Result(a, n, x);
	cout << "\n" << kq;

	return 0;
}