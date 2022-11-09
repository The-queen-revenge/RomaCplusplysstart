#include <iostream> // времена года
#include <Windows.h>
class defoult;
using namespace std;
int test_2() {
    int n;
    cout << "enter for number \n";
    cin >> n;
    switch(n) {
    case 12: case 1: case 2:
        cout << "winter";
        break;
        case 3: case 4: case 5:
            cout << "sprin";
            break;
        case 6: case 7: case 8:
            cout << "outumn";
            break;
        case 9: case 10: case 11:
            cout << "summer";
            break;
            defoult:
                break;
    }
    return 0;
}