#include <conio.h>
#include <iostream>

using namespace std;

int main() 
{
    int n, m, k = 1, i, j, a[25][25];
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;
    k = m * n;

    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            a[i][j] = k--;

    for (i = 1; i <= m; i++) 
    {
        for (j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
