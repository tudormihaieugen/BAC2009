#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
    char s[20], v[] = "aeiouAEIOU";
    cout << "Sir: "; cin.get(s, 20);
    int i = 0, j = strlen(s) - 1;

    while (strchr(v, s[i]) != 0 && i < strlen(s))
        i++;
    while (strchr(v, s[j]) == 0 && j >= 0)
        j--;

    if (i >= strlen(s) || j == -1)
        cout << "IMPOSIBIL";
    else 
    {
        char aux = s[i];
        s[i] = s[j];
        s[j] = aux;
        cout << s;
    }
}
