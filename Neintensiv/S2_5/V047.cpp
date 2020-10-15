#include <iostream>

using namespace std;

int main() 
{
    int i, j, n, m, a[11][11], b[11][11];
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            b[n + 1 - j][i] = a[i][j];

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= m; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}
