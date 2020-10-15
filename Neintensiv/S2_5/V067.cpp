#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
	char c[51];
	cout << "Cuvant: ";  cin >> c;

	int i, n = strlen(c);
	for (i = n - 1; i >= 0; i--)
		cout << c + i << endl;
}
