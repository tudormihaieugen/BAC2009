#include <iostream>

using namespace std;

int main()
{
	int x, y, aux;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	x = x % 10;
	y = y % 10;
	if (y < x)
	{
		aux = y;
		y = x;
		x = aux;
	}
	while (x <= y)
	{
		cout << x * 10 + y << " ";
		x++;
		y--;
	}
}