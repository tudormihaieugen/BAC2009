#include <iostream>

using namespace std;

int main() 
{
    int a[21][21], n, par = 2, impar = 1, i, j;
    cout << "n = "; cin >> n;

    for (i = 1; i <= 2 * n; i++)
        if (i % 2 == 1)
            for (j = 1; j <= 2 * n; j++) 
            {
                a[i][j] = impar;
                impar += 2;
            }
        else
            for (j = 2 * n; j >= 1; j--) 
            {
                a[i][j] = par;
                par += 2;
            }

    for (i = 1; i <= 2 * n; i++) 
    {
        for (j = 1; j <= 2 * n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
