#include <iostream>

using namespace std;

int main()
{
	int x, aux, t = 1, c;
	cout << "x = "; cin >> x;
	aux = x;
	while (aux > 9)
	{
		aux = aux / 10;
		t = t * 10;
	}
	aux = x;
	do
	{
		c = x % 10;
		x = x / 10;
		x = c * t + x;
		cout << x << " ";
	} while (x != aux);
}