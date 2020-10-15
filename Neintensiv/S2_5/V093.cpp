#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
	char c[201], d[201], v[] = "aeiouAEIOU";
	int i, n = strlen(c);
	cout << "Sir 1:"; cin.getline(c, 200);
	cout << "Sir 2:"; cin.getline(d, 200);

	for (i = 0; i < n; i++)
		if ((strchr(v, c[i]) || NULL) ^ (strchr(v, d[i]) || NULL)) 
			cout << '?';
		else 
		{
			if (strchr(v, c[i]))
				cout << '*';
			else
				cout << '#';
		}
}
