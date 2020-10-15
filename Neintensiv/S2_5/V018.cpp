#include <iostream>

using namespace std;

int main()
{
    int a[20][20], i, j, n;
    cout << "n = "; cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i % 2 == 0)
                a[i][j] = j;
            else
                a[i][j] = i;
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
