/*
	Exe_254: Đếm số lượng giá trị trong mảng thỏa tính chất "lớn hơn tất cả các giá trị đứng đằng trước nó"
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
	for(int i = 1; i < n; i++)
	{
		if(a[i] > abs(a[i - 1]))
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