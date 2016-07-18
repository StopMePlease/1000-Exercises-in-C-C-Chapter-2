/*
	Exe_167: Cho mảng 1 chiều các số nguyên, hãy viết hàm tìm giá trị đầu tiên thỏa điều kiện toàn chữ số lẻ và là giá trị lớn nhất thỏa điều kiện ấy. Nếu k có trả về 0
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
	if(n % 2 == 0)
		return false;

	while(n)
	{
		if(n % 2 == 0)
			return false;
		n /= 10;
	}
	return true;
}

int Result(int a[], int n)
{
	int temp = 0;
	int vt = -1;
	for(int i = 0; i < n; i++)
	{
		if(Check(a[i]))
		{
			temp = a[i];
			vt = i;
			break;
		}
	}

	for(int i = vt + 1; i < n; i++)
	{
		if(Check(a[i]) && a[i] > temp)
		{
			temp = a[i];
		}
	}
	return temp;
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