#include <iostream>

using namespace std;

int main() 
{
	int n, a[50][50], i, j, ok = 1;
	cout << "n = "; cin >> n;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}

	for (i = 1; i < n && ok == 1; i++)
		for (j = 0; j < i && ok == 1; j++)
			if (a[i][j] != 0)
				ok = 0;


	if (ok == 1)
		cout << "Este triunghiulara superior";
	else
		cout << "Nu este triunghiulara superior";
}
