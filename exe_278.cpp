/*
	Exe_278: Xóa tất cả các phần tử trùng nhau trong mảng, chỉ giữa lại 1 phần tử duy nhất
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

void Result(int a[], int &n)
{
	for(int i = 0; i < n; i++)
	{
		
		for(int j = i + 1; j < n; j++)
		{
			if(a[j] == a[i])
			{
				for(int k = j; k < n; k++)
				{
					a[k] = a[k + 1];
				}
				n--;
				j--;
			}
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
	Output(a, n);

	return 0;
}