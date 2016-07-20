/*
	Exe_191: Hãy liệt kê các giá trị cực đại trong mảng 1 chiều các số thục. 1 giá trị dc gọi là cực đại khi lớn hơn các phần tử lân cận
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
	for(int i = 1; i < n - 1; i++)
	{
		if(a[i] > a[i - 1] && a[i] > a[i + 1])
		{
			cout << a[i] << "\t";
		}
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