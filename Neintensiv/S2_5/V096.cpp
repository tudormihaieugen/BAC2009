#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)  //Eroare strcpy visual studio

using namespace std;

int main() 
{
	char nume[21], prenume[21], s[41], v[] = "aeiouAEIOU";
	cout << "Nume: "; cin.getline(nume, 20);
	cout << "Prenume: "; cin.getline(prenume, 20);

	int i, n = strlen(prenume), index = 0;
	for (i = 0; i < n; i++)
		if (!strchr(v, prenume[i]))
			s[index++] = prenume[i];

	s[index++] = ' ';
	s[index] = NULL;

	strcat(s, nume);

	cout << s;
}
