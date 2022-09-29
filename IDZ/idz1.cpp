#include <iostream>
#include <cmath>
using namespace std;
int test_3() {
    int n;
    cout << " enter for number \n";
    cin >> n;
    if(n >= 0) {
        n= pow((n + 1), 5);
    }
    cout << " we took your number n, if n >=  0, then n + 1 and (n + 1) ^ 5, otherwise we will leave it unchanged \n";
    cout << n;
    return 0;
}