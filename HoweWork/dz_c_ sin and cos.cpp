#include <iostream>
#include <math.h>
using namespace std;
double const pi = 4 * std::atan(1);
int test_11()
{
    system("chcp 65001");
    float a, y1, y2, y3, y4;
    printf("Введите угол a в градусах\n");
    printf("Y1 = ( 2 * sin(3 * Pi - 2 * a) ^ 2 ) * cos(5 * pi +2*a)\n");
    printf("Y2 = (1 - 1/4 * sin(2 * a) ^ 2 + cos(2 * a)\n");
    printf("Y3 = (1/4 - 1/4 * sin(5/8 * Pi - 8 * a)\n");
    printf("Y4 = Cos(a) ^ 2 + Cos(a) ^ 4 \n");
    scanf_s("%f", &a);
    float rad = (a * (pi / 180));
    y1 = 2 * pow(sin(3 * pi - 2 * rad), 2) * pow(cos(5 * pi + 2 * rad), 2);
    printf("y1 = % .4f \n", y1);
    y2 = 1 - 0.25 * pow(sin(2 * rad), 2) + cos(2 * rad);
    printf("y2 = % .4f \n", y2);
    y3 = 0.25 - 0.25 * sin(0.625 * pi - 8 * rad);
    printf("y3 = % .4f\n", y3);
    y4 = pow(cos(rad), 2) + pow(cos(rad), 4);
    printf("y4 = % .4f \n", y4);
    system("pause");
}