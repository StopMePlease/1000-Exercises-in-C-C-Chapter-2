/*
	Exe_229: Đếm số lượng các giá trị phân biệt
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
	int check;
	int dem;
	for(int i = 0; i < n; i++)
	{
		check = 0;
		dem = 1;
		for(int j = i - 1; j >= 0; j--)
		{
			if(a[j] == a[i])
			{
				check = 1;
				break;
			}
		}
		if(check == 1)
		{
			continue;
		}

		for(int k = i + 1; k < n; k++)
		{
			if(a[k] == a[i])
			{
				dem++;
			}
		}
		
		if(dem == 1)
			cout << a[i] << ": " << dem << endl;
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
