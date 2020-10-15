#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[255];
    int i;
    cout << "Sir: "; cin.get(a, 255);
    int len = strlen(a);
    a[0] = a[0] - 32;
    a[len - 1] -= 32;

    for (i = 1; i <= len - 2; i++)
        if (a[i] != ' ' && (a[i - 1] == ' ' || a[i + 1] == ' '))
            a[i] -= 32;
    cout << a;
}
