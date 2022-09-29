#include <iostream>
using namespace std;
int ma() {
    int n, h, m, s;
    cin >> n;
    h = n / 3600;
    n = n - (n / 3600) * 3600;
    m = n / 60;
    n = n - (n/60) * 60;
    s = n;
    h = h % 24;
    cout << h << ':' << m/10 << m%10 << ':' << s/10 << s%10;
    return 0;
}