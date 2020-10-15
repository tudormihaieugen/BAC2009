#include <iostream>

using namespace std;

int main()
{
    int a[20][20], i, j, n;
    cout << "n = "; cin >> n;

    for (i = 1; i <= 6; i++)
    {
        for (j = i + 1; j <= 6; j++)
        {
            a[j][i] = n % 10;
            a[i][j] = n % 10;
        }
        n = n / 10;
    }
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 6; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
