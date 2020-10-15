#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
    int i = 0, p, j;
    char s[255], v[] = "aeiou";
    cout << "Sir: "; cin.get(s, 255);
    int len = strlen(s);

    if (strchr(v, s[i])) 
    {
        p = i;
        while (s[i] != ' ')
            i++;
        for (j = i - 1; j >= p; j--)
            cout << s[j];
    }
    else
        while (s[i] != ' ') 
        {
            cout << s[i];
            i++;
        }
    cout << ' ';
    i++;
    while (i < len) 
    {
        if (strchr(v, s[i]) && s[i - 1] == ' ') 
        {
            p = i;
            while (s[i] != ' ' && i < len)
                i++;
            for (j = i - 1; j >= p; j--)
                cout << s[j];
        }
        else
            while (s[i] != ' ' && i < len) 
            {
                cout << s[i];
                i++;
            }
        i++;
        cout << " ";
    }
}
