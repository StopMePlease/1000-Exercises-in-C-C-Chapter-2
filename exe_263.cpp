/*
	Exe_263: Sắp xếp các số dương trong mảng tăng dần, số lẻ giảm dần. Vị trí tương đối giữa các số chẵn lẻ không đổi
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

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Result(int a[], int n)
{
	int check = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			for(int j = i; j < n; j++)
			{
				if(a[j] % 2 == 0)
				{
					if(a[i] > a[j])
					{
						Swap(a[i], a[j]);
					}
				}
			}
		}
		else
		{
			for(int j = i; j < n; j++)
			{
				if(a[j] % 2 != 0)
				{
					if(a[i] < a[j])
					{
						Swap(a[i], a[j]);
					}
				}
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