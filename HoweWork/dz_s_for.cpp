#include <iostream>
#include <iomanip>
#include <string>
int Точки = 0;
using namespace std;
int test_3()
{
    system("chcp 65001");
    printf("\n");
    int min, max;
    printf("Введите диапазон и количество точек функции y=x*x+1\n");
    printf("По окончании ввода вам покажут таблицу \n");
    do
    {
        printf("\033[34mMin \033[0m");
        cin >> min;
        printf("\033[31mMax \033[0m");
        cin >> max;
    } while (max<min);
    printf("\033[32mКоличество точек: \033[0m");
    cin >> Точки;
    float c = 0;
    if (min<=0&&max<=0)
        c = min * -1 - max * -1;
    if (min>=0&&max>=0)
        c = max - min;
    if (min <= 0 && max >= 0)
        c = min * -1 + max;
    c = c / (Точки-1);
    cout << "| " << setw(20) << left << "   X    " << setw(8) << "| " << setw(20) << " Y   " << setw(5) << "| "<< endl;
    cout << fixed;
    cout.precision(2);
    for (float i = min; i < max; i += c)
    {
        cout << "| " << setw(20) << left << i << setw(8) << "| " << setw(20) << i * i + 1 << setw(5) << "| " << endl;
    }
    float a = max;
    cout << "| " << setw(20) << left << a << setw(8) << "| " << setw(20) << a * a + 1 << setw(5) << "| " << endl;
    cout << endl;
    system("pause");
    return 0;
}