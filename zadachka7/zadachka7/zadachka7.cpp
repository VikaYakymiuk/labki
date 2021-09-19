#include <iostream>

using namespace std;

int main() {

	int namber, m, n;
	cout << "Namber: ";
	cin >> namber;
	cout << endl;
	n = 2;
	m = ((namber + n - 2) % 7) + 1;
	cout << "Day: " << m;
}