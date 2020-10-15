#include <iostream>

using namespace std;

void main() 
{
    int a[100][100], i, j, n, k1 = 0, k2 = 0, s1 = 0, s2 = 0;
    float m1 = 0, m2 = 0;
    cout << "n = "; cin >> n;

    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }

    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) 
        {
            if (i < j && a[i][j] > 0) 
            {
                s1 += a[i][j];
                k1++;
            }
            if (i > j && a[i][j] > 0) 
            {
                s2 += a[i][j];
                k2++;
            }
        }

    if (k1 > 0)
        m1 = s1 / k1;

    if (k2 > 0)
        m2 = s2 / k2;

    cout << m1 - m2;
}
