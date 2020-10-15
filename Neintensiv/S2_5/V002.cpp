#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)  //Eroare strcpy visual studio

using namespace std;

int main()
{
    char s[40];
    cout << "Sir: "; cin >> s;
    char v[] = "aeiou";
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (strchr(v, s[i]) != 0)
        {
            char aux[40];
            strcpy(aux, s + i);
            strcpy(s + i + 1, aux);
            s[i + 1] = s[i + 1] - 32;
        }
    }
    cout << s << endl;
}
