#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
    char s[50], i;
    int f[130], j;
    cout << "Sir: "; cin.get(s, 255);
    int len = strlen(s);

    for (i = 'a'; i <= 'z'; i++)
        f[i] = 0;

    for (j = 0; j < len; j++)
        if (s[j] >= 'a' && s[j] <= 'z')
            f[s[j]]++;

    int max = 0;
    char l;
    for (i = 'a'; i <= 'z'; i++)
    {
        if (f[i] > max)
        {
            max = f[i];
            l = i;
        }
    }
    cout << l;
}
