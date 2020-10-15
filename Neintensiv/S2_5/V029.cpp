#include <iostream>

using namespace std;

int main() 
{
    int a[7][7], n, i, j, p = 1, ok;
    cout << "n = "; cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    for (j = 2; j <= n; j++) 
    {
        ok = 1;
        for (i = 2; i <= n; i++)
            if (a[1][1] * a[i][j] != a[i][1] * a[1][j])
                ok = 0;
        if (ok)
            p = p * (a[1][j] / a[1][1]);
    }
    cout << p;
}
