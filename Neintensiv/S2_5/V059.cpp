#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
    char s[51], c, cmax;
    int i, max = 0, k;
    cout << "Sir: "; cin.get(s, 51);
    int n = strlen(s);

    for (c = '0'; c <= '9'; c++) 
    {
        k = 0;
        for (i = 0; i < n; i++)
            if (s[i] == c)
                k++;

        if (k > max) 
        {
            cmax = c;
            max = k;
        }
    }
    if (max == 0)
        cout << "NU";
    else
        cout << cmax;
}
