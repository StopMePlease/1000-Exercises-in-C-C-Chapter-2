/*
	Exe_161: Cho mảng 1 chiều các số nguyên hãy tìm giá trị đầu tiên trong mảng nằm trong khoảng (x,y) cho trước. Nếu k có thì trả về x
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

double Result(double a[], int n, double x, double y)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] < y && a[i] > x)
			return a[i];
	}
	return x;
}

int main()
{
	double a[100], x, y;
	int n;
	cout << "Input n: ";
	cin >> n;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	Input(a, n);
	Output(a, n);
	double kq = Result(a, n, x, y);
	cout << kq;

	return 0;
}