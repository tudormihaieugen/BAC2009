#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int n, i, nrSiruri = 0;
	cout << "n = "; cin >> n;
	char c[31], vocale[] = "aeiou";

	for (i = 0; i < n; i++)
	{
		cout << "Sir: "; cin >> c;
		int len = strlen(c);
		int j;
		for (j = 0; j < len; j++)
		{
			if (!strchr(vocale, c[j]))
				break;
		}
		if (j == strlen(c))
			nrSiruri++;
	}
	cout << nrSiruri;
}
