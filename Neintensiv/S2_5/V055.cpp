#include <iostream>

using namespace std;

int main() 
{
    int a = 0, b = 0, i = 0;
    char s[10];
    cout << "Sir: "; cin >> s;

    while (s[i] != '.') 
    {
        a = a * 10 + (s[i] - '0');
        i++;
    }
    i++;
    while (s[i] != NULL) 
    {
        b = b * 10 + (s[i] - '0');
        i++;
    }
    while (b % 10 == 0)
        b = b / 10;
    cout << a + b;
}
