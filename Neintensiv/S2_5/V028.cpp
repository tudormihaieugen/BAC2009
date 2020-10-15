#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100], v[] = "aeiou";
    int i, j;
    cout << "Sir: "; cin >> s;
    int lenv = strlen(v);
    int lens = strlen(s);

    for (i = 0; i < lenv; i++)
    {
        if (strchr(s, v[i]) == 0)
            continue;

        for (j = 0; j < lens; j++)
            if (s[j] != v[i])
                cout << s[j];
        cout << endl;
    }
}
