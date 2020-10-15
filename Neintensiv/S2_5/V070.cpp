#include <iostream>

using namespace std;

int main() 
{
    int m, n, i, j, x, a[25][25];

    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;

    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }

    cout << "x = "; cin >> x;

    for (i = x; i <= m - 1; i++)
        for (j = 1; j <= n; j++)
            a[i][j] = a[i + 1][j];
    m--;
    for (i = 1; i <= m; i++) 
    {
        for (j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
