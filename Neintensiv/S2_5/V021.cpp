#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
    char s[251], i;
    cout << "Sir: "; cin.get(s, 251);
    int len = strlen(s);

    for (i = 0; i < len - 1; i++)
        if (s[i] == s[i + 1] && s[i] != '*')
            cout << s[i] << s[i + 1] << endl;
}
