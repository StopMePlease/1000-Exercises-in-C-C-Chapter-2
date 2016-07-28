/*
	Exe_285: Hãy đảo ngược thứ tự các số dương có trong mảng
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
	int temp = n - 1;	
	for(int i = 0; i < n; i++)
	{		
		if(a[i] > 0)
		{			
			for(int j = temp; j > i; j--)
			{
				if(a[j] > 0)
				{
					swap(a[i], a[j]);
					temp = j - 1;
					break;
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