#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)  //Eroare strcpy visual studio

using namespace std;

int main() 
{
	char s[21], dupaEliminare[19], vocale[] = "aeiou";
	cout << "Sir: "; cin.get(s, 20);
	int i, n = strlen(s), pozitieVocala = -1, index = 0;

	for (i = 0; i < n; i++) 
	{
		if (strchr(vocale, s[i])) 
		{
			if (pozitieVocala == -1) 
			{
				pozitieVocala = i;
				continue;
			}
			pozitieVocala = i - 1;
		}
		dupaEliminare[index++] = s[i];
	}
	dupaEliminare[index] = NULL;
	strcpy(dupaEliminare + pozitieVocala, dupaEliminare + pozitieVocala + 1);

	cout << dupaEliminare;
}
