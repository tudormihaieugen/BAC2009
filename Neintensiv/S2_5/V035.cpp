#include <iostream>

using namespace std;

int main() 
{
    int i, min, j, n, a[10][10];
    cout << "n ="; cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    for (j = 1; j <= n; j++) 
    {
        min = 1000;
        for (i = 1; i <= n; i++)
            if (a[i][j] < min)
                min = a[i][j];
        cout << min << " ";
    }
}
