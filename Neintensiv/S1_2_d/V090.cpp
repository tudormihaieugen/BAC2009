#include <iostream>

using namespace std;

int main()
{
	int a, b, k, t, p = 0;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "k = "; cin >> k;
	t = a;
	while (t <= b)
	{
		if (k = t % 10)
		{
			cout << t;
			p = 1;
		}
		t++;
	}
	if (p == 0)
		cout << "-1";
}