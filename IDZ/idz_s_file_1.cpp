#include <iostream>
#include <fstream>
using namespace std;
int mn() {
    ofstream fout;
    fout.open("rim.txt");
    fout << "Работа с файлами в С++";
    fout.close();
    system("pause");
    return 0;
}