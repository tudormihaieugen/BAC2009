#include <iostream>

using namespace std;

int main() 
{
    int a[30][30], i, j, n, m, p = 1, ok = 0;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }

    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            if (a[i][j] > 0 && i % 2 == 0 && j % 2 != 0) 
            {
                p = p * a[i][j];
                ok = 1;
            }
    if (ok == 1)
        cout << p % 10;
    else
        cout << "Nu exista";
}
