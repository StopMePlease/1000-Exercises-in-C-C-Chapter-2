/*
	Exe_244: Kiểm tra mảng nguyên có tồn tại số hoàn thiện nào lớn hơn 256. Không tồn tại -> 0, có tồn tại -> 1
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
	int sum = 0;
	for(int i = 1; i < n; i++)
	{
		if(n % i == 0)
		{
			sum += i;
		}
	}
	return sum == n ? true : false;
}

int Result(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		if(Check(a[i]) && a[i] > 256)
		{
			return 1;
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