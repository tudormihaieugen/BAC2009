#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
    char s[256];
    int i, j, ok;
    cout << "Sir: "; cin.get(s, 256);
    int len = strlen(s);

    for (i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            ok = 0;
            for (j = 0; j < i; j++)
                if (s[i] == s[j])
                    ok = 1;

            if (!ok)
                cout << s[i] << " ";
        }
    }
}
