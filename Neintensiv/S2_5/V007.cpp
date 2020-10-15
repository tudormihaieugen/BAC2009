#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)  //Eroare strcpy visual studio

using namespace std;

int main() 
{
    char s[255];
    cout << "Sir: "; cin.get(s, 255);
    char v[] = " aeiou";
    int ok = 0;
    int i = strlen(s) - 1;

    while (!ok)
    {
        if (strchr(v, s[i]) == 0) 
        {
            strcpy(s + i, s + i + 1);
            ok = 1;
        }
        i--;
    }
    cout << s;
}
