/*
	Exe_155: Hãy tìm giá trị trong mảng các số thực "xa giá trị x nhất"
*/
#include <iostream>
#include <cmath>

using namespace std;

void Input(double a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

void Output(double a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "      ";
	}
}

double Result(double a[], int n, double x)
{
	double temp;
	double rs = a[0];
	if(x == 0)
	{
		temp = a[0];
		for(int i = 1; i < n; i++)
		{
			if(a[i] < temp)
			{
				temp = a[i];
			}
		}
		return temp;
	}

	if(a[0] == 0)
	{
		temp = x;
	}
	else if( a[0] > 0)
	{
		if(x > 0)
		{
			temp = a[0] - x;
		}
		else if(x < 0)
		{
			temp = a[0] + fabs(x);
		}
		else
		{
			temp = a[0];
		}
	}
	else if(a[0] < 0)
	{
		if(x > 0)
		{
			temp = fabs(a[0]) + x;			
		}
		else if(x < 0)
		{
			temp = a[0] - x;
		}
		else
		{
			temp = a[0];
		}
	}

	for(int i = 1; i < n; i++)
	{
		if(x > 0)
		{
			if(a[i] > 0)
			{
				double temp2 = a[i] - x;
				temp2 = fabs(temp2);
				if(temp2 < temp)
				{
					temp = temp2;
					rs = a[i];
				}
			}
			else if(a[i] < 0)
			{
				double temp2 = x + fabs(a[i]);
				if(temp2 < temp)
				{
					temp = temp2;
					rs = a[i];
				}
			}
			else if(a[i] == 0)
			{
				double temp2 = x;
				if(temp2 < temp)
				{
					temp = temp2;
					rs = a[i];
				}
			}
		}
		else if(x < 0)
		{
			if(a[i] > 0)
			{
				double temp2 = fabs(x) + a[i];
				if(temp2 < temp)
				{
					temp = temp2;
					rs = a[i];
				}
			}
			else if(a[i] < 0)
			{
				double temp2 = x - a[i];
				temp2 = fabs(temp2);
				if(temp2 < temp)
				{
					temp = temp2;
					rs = a[i];
				}
			}
			else if(a[i] == 0)
			{
				double temp2 = fabs(x);
				if(temp2 < temp)
				{
					temp = temp2;
					rs = a[i];
				}
			}
		}
	}
	return rs;
}

int main()
{
	double a[100], x;
	int n;
	cout << "Input n: ";
	cin >> n;
	cout << "Input x: ";
	cin >> x;
	Input(a, n);
	Output(a, n);
	double kq = Result(a, n, x);
	cout << "\n" << kq;

	return 0;
}