#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)  //Eroare strcpy visual studio

using namespace std;

int main() 
{
	char s1[21], s2[21];
	int n = strlen(s1);
	cout << "Sir: "; cin.get(s1, 20);

	char* p = strtok(s1, " ");
	strcpy(s2 + 3, p);

	p = strtok(NULL, " ");

	s2[0] = p[0];
	s2[1] = '.';
	s2[2] = ' ';

	cout << s2;
}
