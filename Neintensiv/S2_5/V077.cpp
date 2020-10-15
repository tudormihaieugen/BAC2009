#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)  //Eroare strcpy visual studio

using namespace std;

int main() 
{
	char c[51], * p;
	cout << "c : ";
	cin.get(c, 50);

	p = strtok(c, " ");
	while (p) 
	{
		p[0] += 'A' - 'a';
		p[strlen(p) - 1] += 'A' - 'a';

		cout << p << " ";

		p = strtok(NULL, " ");
	}
}
