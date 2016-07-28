/*
	Exe_282: Đưa các số chia hết cho 3 về đầu mảng
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
	for(int i = 0; i < n; i++)
	{		
		if(a[i] % 3 != 0)
		{			
			for(int j = i + 1; j < n; j++)
			{
				if(a[j] % 3 == 0)
				{
					swap(a[i], a[j]);					
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