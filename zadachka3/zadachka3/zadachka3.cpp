#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, p;
    cout << "First leg: ";
    cin >> a;
    cout << "Second leg: ";
    cin >> b;
    c = sqrt(a * a + b * b);
    p = a + b + c;
    cout << "Hypotenuse: " << c << ", Perimeter: " << p;
    return 0;
}