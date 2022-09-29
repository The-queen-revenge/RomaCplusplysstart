#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;
int test_2() {
    int a;
    cin >> a;
    cout << "y1 = " << 2 * pow(sin(3 * M_PI - 2 * a), 2) * pow(cos(5 * M_PI + 2 * a), 2) << "\n";
    cout << "y2 = " << 1 - 1 / 4 * (pow(sin(2 * a), 2 )) + cos(2 * a) << "\n";
    cout << "y3 = " << 1 / 4 - 1 / 4 * (sin((5 / 8) * a) - 8 * a) << "\n";
    cout << "y4 = " << pow(cos(a), 2) + pow(cos(a), 4) << "\n";
    return 0;
}