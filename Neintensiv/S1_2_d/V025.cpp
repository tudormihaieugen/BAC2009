#include <iostream>

using namespace std;

int main()
{
	int a, b, c, t;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	while (a <= b)
	{
		if (c % a == 0)
			cout << a << endl;
		a++;
	}
}