#include <math.h>
#include <iostream>
using namespace std;
int main(int argc, const char* argv[]) {
    int a;
    cout << "Input A with 3 didjts: ";
    cin >> a;
    cout << "Your new number: " << a % 10 << a / 10;


    return 0;
}