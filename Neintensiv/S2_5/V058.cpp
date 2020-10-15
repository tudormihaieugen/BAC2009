#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
	char c[51], sirNou[51], nonLitere[] = "0123456789 ";
	cout << "Sir: "; cin.get(c, 50);
	int i, n = strlen(c), index = 0;

	for (i = 0; i < n; i++)
		if (!strchr(nonLitere, c[i]))
			sirNou[index++] = c[i];

	sirNou[index] = NULL;
	cout << sirNou;
}
