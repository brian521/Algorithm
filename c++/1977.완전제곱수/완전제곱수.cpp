#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int M, N, a, b;

	cin >> M >> N;

	a = 0;
	b = (int)pow(ceil(sqrt(M)), 2);

	for (int i = (int)ceil(sqrt(M)); i <= (int)floor(sqrt(N)); i++)
	{
		a += pow(i,2);
	}
	if (a == 0)
	{
		cout << -1;
	}
	else 
	{
		cout << a << endl << b;
	}

	return 0;
}
