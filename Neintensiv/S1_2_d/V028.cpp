#include <iostream>

using namespace std;

int main()
{
	float x; int y;
	cout << "x = "; cin >> x;
	y = int(x);
	x = x - y;
	while (x != int(x))
		x = x * 10;
	if (x == y)
		cout << "1";
	else
		cout << "2";
}