#include <iostream> // Дана строка-предложение на русском языке. Подсчитать количество содержащихся в строке знаков препинания.
using namespace std;
int test_e()
{
    string s;
    getline(cin, s);
    int k = 0, pos = s.find_first_of(",!)(-.:;");
    while(pos + 1){
        ++k;
        pos = s.find_first_of(",!)(-.:;", pos + 1);
    }
    cout << k;
    return 0;
}