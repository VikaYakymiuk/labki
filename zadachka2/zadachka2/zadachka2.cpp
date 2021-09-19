#include <iostream>

using namespace std;

int main() {
    double a, v, s;
    cout << "Enter a cube side:\n";
    cout << "a = ";
    cin >> a;
    v = a * a * a;
    s = 6 * a * a;
    cout << "Result:\n";
    cout << "v = " << v << "\n";
    cout << "s = " << s << "\n";
    return 0;
}