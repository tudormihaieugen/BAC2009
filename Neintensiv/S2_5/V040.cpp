#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)  //Eroare strcpy visual studio

using namespace std;

int main()
{
    char s[255];
    cout << "s: "; cin >> s;
    char* x1 = strtok(s, "*");
    char* x2 = x1;

    while (x1 != NULL)
    {
        if (strcmp(x2, x1) != 0)
            cout << x1 << "*";
        else
            cout << "*";

        x1 = strtok(NULL, "*");
    }
}
