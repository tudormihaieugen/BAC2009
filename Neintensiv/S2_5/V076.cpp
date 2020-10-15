#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)  //Eroare strcpy visual studio

using namespace std;

int main() 
{
	char c[21];
	cout << "c = "; cin >> c;
	int n = strlen(c);

	while (*c != NULL) 
	{
		cout << c << endl;
		strcpy(c, c + 1);
		c[strlen(c) - 1] = NULL;
	}
}
