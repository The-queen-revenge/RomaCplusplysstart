#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
const double PI = 3.141592653589793;
int test_r(){
    system("chcp 65001");
    printf("Введите признак геометрической фигуры на плоскости\n");
    char c;
    scanf("%c",&c);
    switch (c)
    {
        case 'K':
            float r, S,P;
            printf("Введите радиус\n");
            scanf("%f", &r);
            printf("Длинна окружности = %f\n", 2 * PI * r);
            printf("Площадь круга = %f\n",PI*r*r);
            break;
        case 'P':
            float a, b, s;
            printf("Введите сторону А\n");
            scanf("%f", &a);
            printf("Введите сторону B\n");
            scanf("%f", &b);
            printf("Периметр = %f\n",a*2+b*2);
            printf("Площадь = %f\n", a * b);
            break;
        case 'T':
            float a1, b1, c, p;
            printf("Введите сторону А\n");
            scanf("%f", &a1);
            printf("Введите сторону B\n");
            scanf("%f", &b1);
            printf("Введите сторону C\n");
            scanf("%f", &c);
            p = a1 + b1 + c;
            printf("Периметр = %f\n", p);
            p = p / 2;
            a = sqrt(p * (p - a1) * (p - b1) * (p - c));
            printf("Площадь = %f\n", a);
            break;
        default:
            break;
    }


}