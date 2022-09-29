#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "enter a number \n";
    cin >> n;
    if(n >= 0) {
        n =pow((n + 1), 5);
    }
    cout << n;
    return 0;
}