#include <iostream>

using namespace std;

int main() 
{
    int i, n, p, x = 1, j, a[30][30];
    cout << "n = "; cin >> n;
    cout << "p = "; cin >> p;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++) 
        {
            a[i][j] = x * x;
            x = x + 2;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
