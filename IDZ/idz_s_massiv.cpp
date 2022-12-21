#include <iostream> // формирует и выводит целочисленный массив размера N, содержащий степени тройки от первой до N-й
#include <cmath> // константу добавить
#include <Windows.h>
using namespace std;
int вомивш() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("Введите число \n");
    int size = 0;
    cin >> size;
    int mas[size];
    for (int i = 0; i < size; i++) {
        mas[i] = (int)pow(3, i + 1);
        cout << mas[i] << endl;
    }
}