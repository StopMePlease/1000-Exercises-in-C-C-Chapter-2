/*
	Exe_173: Cho mảng 1 chiều các số nguyên, hãy viết hàm tìm chữ số xuất hiện ít nhất trong mảng
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
	int b[10] = {0};
	for(int i = 0; i < n; i++)
	{
		int temp = a[i];
		while(temp)
		{
			int x = temp % 10;
			for(int j = 0; j <= 10; j++)
			{
				if(x == j)
				{
					b[j] += 1;
					break;
				}
			}
			temp /= 10;
		}
	}

	int min = 0;
	for(int i = 0; i < n; i++)
	{
		if(b[i] > 0)
		{
			min = b[i];
			break;
		}
	}

	for(int i = 0; i < n; i++)
	{
		if(b[i] < min && b[i] > 0)
		{
			min = b[i];
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		if(b[i] == min)
		{
			cout << i << "\t";
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