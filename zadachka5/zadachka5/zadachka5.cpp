#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    int a, b, c, s, v;

    cout << "Введіть довжину, ширину та висоту: " << endl;
    cin >> a >> b >> c;

    s = 2 * a * b + 2 * a * c + 2 * b * c;
    v = a * b * c;

    cout << "Площа: " << s << endl;
    cout << "Об'єм:  " << v << endl;

    return 0;
}