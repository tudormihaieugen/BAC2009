#include <iostream>

using namespace std;

int main() 
{
    int i, j, n, a[7][7], f[48], k;
    cout << "n = "; cin >> n;
    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n * n; i++)
        f[i] = f[i - 1] + f[i - 2];

    k = 0;

    for (i = 1; i <= n; i++)
        if (i % 2 == 1)
            for (j = 1; j <= n; j++)
                a[i][j] = f[k++];
        else
            for (j = n; j >= 1; j--)
                a[i][j] = f[k++];

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
