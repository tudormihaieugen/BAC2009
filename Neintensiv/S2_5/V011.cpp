#include <iostream>

using namespace std;

int main() 
{
    int i, n, m, x, y = 0, j, a[30][30];
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    for (i = 0; i < m; i++) 
    {
        x = a[i][0];
        for (j = 0; j < n; j++)
        {
            if (a[i][j] < x)
                x = a[i][j];
        }
        if (x > y)
            y = x;
    }
    cout << y;
}
