#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)  //Eroare strcpy visual studio

using namespace std;

int main() 
{
    char s1[200], s2[15], * p;
    int ok = 0;
    cout << "Sir: "; cin.get(s1, 200);
    cin.get();
    cout << "Cuvant: "; cin >> s2;
    p = s1;

    while (strstr(p, s2))
    {
        char* q = strstr(p, s2);
        if (((q - 1)[0] == ' ' || p == s1) && (q + strlen(s2))[0] == ' ') 
        {
            char aux[200];
            strcpy(aux, s2);
            strcat(aux, "?");
            strcat(aux, q + strlen(s2));
            strcpy(q, aux);
            ok = 1;
        }
        p = q + strlen(s2);
    }

    if (ok == 1)
        cout << s1;
    else
        cout << "NU APARE";
}
