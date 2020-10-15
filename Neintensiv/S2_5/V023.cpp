#include <iostream>

using namespace std;


int main()
{
    int a[20][20], i, j, n, m;
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1)
                a[i][j] = j;
            else
            {
                if (j == 1)
                    a[i][j] = i;
                else
                    a[i][j] = a[i - 1][j] + a[i][j - 1];
            }
        }
    }
    cout << a[m][n] % 10;
}
