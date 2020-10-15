#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
	char c[101], vocale[] = "aeiou";
	cout << "Sir: "; cin.get(c, 100);
	int i, n = strlen(c);

	for (i = 0; i < n; i++) 
		if (strchr(vocale, c[i]))
			c[i] = c[i] + 1;

	cout << c;
}
