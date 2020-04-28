#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	if (x > y)
		swap(x, y);
	if (x % 2 == 0)
		x++;
	while (x <= y)
	{
		x = x + 2;
		cout << "*";
	}
}