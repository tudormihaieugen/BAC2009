#include <iostream>

using namespace std;

int main() 
{
    int n, i, j, max, ok = 0;
    long p;
    int a[10][10];
    cout << "n = "; cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    for (j = 1; j <= n; j++) 
    {
        p = 1;
        max = 0;
        for (i = 1; i <= n; i++) 
        {
            p = p * a[i][j];
            if (a[i][j] > max)
                max = a[i][j];
        }
        if (p / max == max) 
        {
            cout << max << " ";
            ok = 1;
        }
    }
    if (!ok)
        cout << "nu exista";
}
