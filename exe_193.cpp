/*
	Exe_193: Cho mảng 1 chiều các số nguyên, hãy viết hàm tìm giá trị đầu tiên có dạng 3^k. Nếu k có trả về 0
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
	int check = 1;

	if(n % 2 == 0)
	{
		return false;
	}
	else
	{
		while(true)
		{
			n /= 3;
			if(n % 3 != 0)
			{
				break;
			}
			if( n < 10)
			{
				break;
			}
		}
	}

	if(n == 3 || n == 9)
	{
		check = 0;
	}


	if( check == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Result(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(Check(a[i]))
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