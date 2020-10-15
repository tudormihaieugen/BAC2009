#include <iostream>

using namespace std;

int main() 
{
    int i, j, n, a[100][100];
    long max = 1000000000;
    cout << "n = "; cin >> n;

    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }

    for (i = 0; i <= n + 1; i++)
        a[0][i] = a[i][0] = a[i][n + 1] = a[n + 1][i] = max;

    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (a[i][j] < a[i - 1][j] && a[i][j] < a[i][j - 1] &&
                a[i][j] < a[i + 1][j] && a[i][j] < a[i][j + 1])
                cout << a[i][j] << " ";
}
