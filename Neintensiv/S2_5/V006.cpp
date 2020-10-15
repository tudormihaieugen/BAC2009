#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int i;
	char c[256];
	cout << "Sir: "; cin.get(c, 255);
	c[0] = c[0] + 'A' - 'a';
	int n = strlen(c);

	for (i = 1; i < n; i++) 
	{
		if (c[i] != ' ' && c[i - 1] == ' ')
			c[i] = c[i] + 'A' - 'a';
	}
	cout << c;
}
