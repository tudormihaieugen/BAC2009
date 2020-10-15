#include <iostream>

using namespace std;

int main()
{
    int a[50][50], m, n, i, j, max = 0;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    for (j = 1; j <= m; j++)
    {
        int P = 1;
        for (i = 1; i <= n; i++)
            P = P * a[i][j];
        if (P > max)
            max = P;
    }
    for (j = 1; j <= m; j++)
    {
        int P = 1;
        for (i = 1; i <= n; i++)
            P = P * a[i][j];
        if (P == max)
            cout << j << " ";
    }
}
