/*
	Exe_162: Cho mảng 1 chiều các số thực. Hãy viết hàm tìm 1 vị trí trong mảng thỏa 2 điều kiện: có 2 giá trị lân cận và giá trị tại vị trí đó bằng tích 2 giá trị lân cận. Nếu k có thì trả về -1
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

void Result(double a[], int n)
{
	for(int i = 1; i < n - 1; i++)
	{
		if(a[i] == a[i - 1] * a[i + 1])
		{
			cout << a[i] << endl;
		}
	}
}

int main()
{
	double a[100];
	int n;
	cout << "Input n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);
	Result(a, n);
	
	return 0;
}