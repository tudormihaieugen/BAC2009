#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
    char s[250], c1, c2;
    cout << "s: "; cin.get(s, 250);
    cout << "c1: "; cin >> c1;
    cout << "c2: "; cin >> c2;
    cout << s << endl;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == c1)
            s[i] = c2;
        else if (s[i] == c2)
            s[i] = c1;
    }
    cout << s;
}
