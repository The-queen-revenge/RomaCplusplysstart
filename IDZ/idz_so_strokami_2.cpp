#include <iostream> // Даны строки S и S0. Удалить из строки S первую подстроку, совпадающую с S0. Если совпадающих подстрок нет, то вывести строку S без изменений.
#include <string>
using namespace std;
int test_w()
{
    string S, S0;
    cout << "String S:\n";
    getline(cin, S);
    cout << "String S0:\n";
    getline(cin, S0);
    if (S.find(S0)!=string :: npos){
        cout <<S.erase (S.find(S0),S0.size())<<endl;
    }
    else cout <<S<<endl;
    system("pause");
    return 0;
}