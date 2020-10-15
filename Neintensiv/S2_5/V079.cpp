#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)  //Eroare strcpy visual studio

using namespace std;

int main() 
{
    char v[] = "aeiouAEIOU", s[200], aux[200];
    int i;
    cout << "Sir: "; cin.get(s, 100);
    for (i = 0; i < strlen(s); i++)
        if (strchr(v, s[i])) 
        {
            strcpy(aux, s + i);
            strcpy(s + i + 1, aux);
            s[i + 1] = '*';
        }
    cout << s;
}
