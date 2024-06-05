#include <iostream>;
using namespace std;

template <typename T>
T Sort(T m, T*p,T x)
{
	int s;
	if (x == 1)
	{
		for (int i = 0; i < m; i++)
		{
			for (int k = 0; k < m; k++)
			{
				if (p[k] < p[k + 1])
				{
					s = p[k];
					p[k] = p[k + 1];
					p[k + 1] = s;
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < m-1; i++)
		{
			for (int k = 0; k < m-1; k++)
			{
				if (p[k] > p[k + 1])
				{
					s = p[k];
					p[k] = p[k + 1];
					p[k + 1] = s;
				}
			}
		}
	}
	return *p;
}

int main()
{
	const int m = 5;
	int a[m]{ 4, 8 , 2 ,6 , 10 }, x;
	int* p;
	p = a;

	cout << "Your array:" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << p[i] << " ";
	}
	
	cout << endl << endl << "Print 1 if you want to sort this array by descending," << endl << "print 2 if you want to sort this array by growth." << endl;

	cin >> x;

	*p = Sort(m,p,x);

	cout << endl << "Your sorted array:" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}