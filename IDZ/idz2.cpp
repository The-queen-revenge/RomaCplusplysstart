#include <iostream> // времена года
using namespace std;
int test_m() {
    system("chcp 65001");
    int n;
    cout << "Введите число  \n";
    cin >> n;
    if (n == 12 or n == 1 or n == 2){
        cout << "Зима";
    }
    if (n == 3 or n == 4 or n == 5){
        cout << "Весна";
    }
    if (n == 6 or n == 7 or n == 8){
        cout << "Лето";
    }
    if (n == 9 or n == 10 or n == 11){
        cout << "Осень";
    }
    else{
        cout << "Error, введите новое число";
    }
    return 0;
  }
