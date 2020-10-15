#include <iostream>

using namespace std;

int main() 
{
    int i, n, j, a[30][30];
    cout << "n = ";  cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i + j == n - 1)
                a[i][j] = 0;
            else
                a[i][j] = n - i;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
