#include <iostream>
#include <string.h>

using  namespace std;

int main() 
{
    char s[52], a[200] = "";
    int i, k = 0;
    cout << "Sir: "; cin >> s;
    int len = strlen(s);

    for (i = 0; i < len; i = i + 2)
    {
        for (int j = 1; j <= s[i + 1] - '0'; j++)
        {
            a[k] = s[i];
            k++;
        }
    }
    a[k] = 0;
    cout << a;
}
