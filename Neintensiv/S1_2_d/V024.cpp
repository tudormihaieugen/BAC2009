#include <iostream>

using namespace std;

int main()
{
	int a, b, p, q;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	p = a;
	q = b;
	if (p == 0 || q == 0)
	{
		p = p * q;
		q = p * q;
	}
	while (p != q)
	{
		if (p < q)
			p = p + a;
		else
			q = q + b;
	}
	cout << "p = " << p;
}