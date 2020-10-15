#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char c[41];
	cout << "Sir: "; cin.get(c, 40);
	int i, j, n = strlen(c);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			cout << c[j];
		}
		cout << endl;
	}
}
