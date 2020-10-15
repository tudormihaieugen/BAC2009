#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100], b[100];
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;

    while (a[i] == b[j])
    {
        i--;
        j--;
    }
    if (i == strlen(a) - 1)
        cout << "Nu exista";
    else
        cout << a + i + 1;
}
