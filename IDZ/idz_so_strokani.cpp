#include <iostream> // Дано целое число N (>0) и символ C. Вывести строку длины N, которая состоит из символов C.
using namespace std;
int test_u()
{
    int n, i = 0;
    cin >> n;
    char c;
    cin >> c;
    for(int i = 0; i < n; ++i){
        cout << c << " ";
    }
    return 0;
}