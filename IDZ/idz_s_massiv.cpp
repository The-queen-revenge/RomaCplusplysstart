#include <iostream> // формирует и выводит целочисленный массив размера N, содержащий степени тройки от первой до N-й
using namespace std;
int test_37() {
    system("chcp 65001");
    cout << (" Введите n \n");
    int n;
    cin >> n;
    int mas[n];
    int i = 0;
    while(i < n){
        mas[i] = 3;
        i++;
    }
    i = 1;
    while(i < n){
        mas[i] = mas[i-1] * mas[i];
        cout << mas[i - 1]<<" ";
        i++;
    }
    cout << mas[n-1];
}