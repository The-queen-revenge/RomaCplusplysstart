#include <iostream> // Дана строка-предложение на русском языке. Подсчитать количество содержащихся в строке знаков препинания.
using namespace std;
int рмицгк()
{
    system("chcp 65001");
    int i;
    int k=0;
    char str[100];
    cout << "Введите строку: \n";
    cin.getline(str, 100);
    cout << str << endl;
    for(i = 0; i <=99; i++){
        if((str[i] == '.') or (str[i] == ',') or (str[i] == ';') or (str[i] == ':') or (str[i] == '?') or (str[i] == '!') or (str[i] == '-')){
            k+=1;
        }
    }
    cout << k;
    return 0;
}



