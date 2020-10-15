#include <iostream>

using namespace std;

int main()
{
    int a[20][20], i, j, n;
    cout << "n = "; cin >> n;
    int copie = n, nrLinii = 0;

    for (j = 1; n > 0; j++)
    {
        int copie2 = copie;
        for (i = 1; copie > 0; i++)
        {
            a[i][j] = n % 10;
            copie = copie / 10;
        }
        n = n / 10;
        nrLinii++;
        copie = copie2;
    }
    for (i = 1; i <= nrLinii; i++)
    {
        for (j = 1; j <= nrLinii; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
