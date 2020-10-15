#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[255];
    int i = 0, k = 0;
    char v[] = "AEIOUaeiou";
    cout << "Sir: "; cin.get(s, 255);
    int len = strlen(s);

    while(i < len)
    {
        if (strchr(v, s[i]) && (i == 0 || s[i - 1] == ' '))
        {
            while (s[i] != ' ' && s[i] != NULL)
                i++;

            if (i > 0 && strchr(v, s[i - 1]))
                k++;
        }
        i++;
    }
    if (k == 0)
        cout << "NU EXISTA";
    else
        cout << k;
}
