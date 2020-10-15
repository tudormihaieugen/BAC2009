#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
	char s[21], vocale[] = "aeiou", doarVocale[20];
	cout << "Sir: "; cin >> s;
	int i, n = strlen(s), index = 0;

	for (i = 0; i < n; i++) 
	{
		if (strchr(vocale, s[i])) 
		{
			doarVocale[index] = s[i];
			index++;
		}
	}
	doarVocale[index] = NULL;
	cout << doarVocale;
}
