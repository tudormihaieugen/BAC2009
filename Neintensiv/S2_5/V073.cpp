#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
	char p[100][256], v[] = "aeiouAEIOU", *propMin;
	int i, n, minim = 256;
	cout << "n = "; cin >> n;
	cin.get();

	for (i = 1; i <= n; i++)
	{
		cout << "Propozitia " << i << " : ";
		cin.getline(p[i], 255);
	}

	propMin = p[1];

	for (i = 0; i < n; i++) 
	{
		int j, nrVocale = 0;
		for (j = 0; j < strlen(p[i]); j++)
			if (strchr(v, p[i][j]))
				nrVocale++;

		if (nrVocale <= minim) 
		{
			minim = nrVocale;
			propMin = p[i];
		}
	}

	cout << propMin;
}
