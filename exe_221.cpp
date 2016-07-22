/*
	Exe_221: Hãy cho biết sự tương quan giữa số lượng chẵn và số lượng lẻ trong mảng 1 chiều các số nguyên
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
	for(int i = 1; i < n; i++)
	{
		cout << a[i] << "      ";
	}
	cout << endl;
}

int Result(int a[], int n)
{
	int dem_chan = 0;
	int dem_le = 0;
	
	for(int i = 0; i < n; i++)
	{
		if(a[0] % 2 == 0)
		{
			dem_chan++;
		}
		else
		{
			dem_le++;
		}
	}
	if(dem_chan > dem_le)
	{
		return -1;
	}
	else if(dem_chan < dem_le)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a[100];
	int n, x;
	cout << "Input n: ";
	cin >> n;
	
	Input(a, n);
	Output(a, n);
	int kq = Result(a, n);
	cout << kq;
	
	return 0;
}