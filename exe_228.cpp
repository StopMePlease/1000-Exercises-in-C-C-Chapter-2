/*
	Exe_228: Đếm số lượng các phần tử kề nhau mà số đứng sau cùng dấu với số đứng trước và có giá trị tuyệt đối lớn hơn
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
	
	for(int i = 0; i < n - 1; i++)
	{
		if((a[i] * a[i + 1] > 0) && (abs(a[i]) < abs(a[i + 1])))
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