#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x1, x2, x3, y1, y2, y3 = 0;
	double s, p, a, b, c, pp = 0;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a = sqrt(pow(float(x2 - x1), 2) + pow(float(y2 - y1), 2));
	b = sqrt(pow(float(x3 - x2), 2) + pow(float(y3 - y2), 2));
	c = sqrt(pow(float(x3 - x1), 2) + pow(float(y3 - y1), 2));
	p = a + b + c;
	pp = p / 2;
	s = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
	cout << "S=" << s << endl;
	cout << "P=" << p;
	cin.get();
	cin.get();
	return 0;
}