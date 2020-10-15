#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char c[51];
	cout << "Sir: "; cin >> c;
	int i, n = strlen(c);

	for (i = 1; i < n + 1; i++)
	{
		char aux = c[i];
		c[i] = NULL;
		cout << c << endl;
		c[i] = aux;
	}
}
