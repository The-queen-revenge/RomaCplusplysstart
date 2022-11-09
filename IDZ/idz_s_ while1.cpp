#include <iostream> // Вычислить выражение 	2+2^2+2^3+…+2^n.
#include <cmath>
using namespace std;
int test_4() {
    int n, i =1, s = 0;
    cout << "enter for number \n ";
    cin >> n;
    while(i <= n) {
        s += pow(2, i); i++;
    }
    cout << s;
    return 0;
}