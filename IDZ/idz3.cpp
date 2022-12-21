#include <iostream> // интерфейс допилить
#include <clocale>
#include <cmath>
using namespace std;
const double PI = 3.141592653589793;
int hdvu(){
    system("chcp 65001");
    printf("Введите признак геометрической фигуры на плоскости (K - круг, P - прямоугольник, T - треугольник)\n");
    char c;
    scanf("%c",&c);
    switch (c)
    {
        case 'K':
            float r, S,P;
            printf("Введите радиус r >= 1 \n");
            scanf("%f", &r);
            if(r < 0){
                printf("Радиус не может быть отрицательным, введите данные заного \n");
                break;
            }
            if(r == 0){
                printf("У вас получилась точка,  введите данные заного \n");
                break;
            }
            printf("Длинна окружности круга :  2 * PI * r = %f\n", 2 * PI * r);
            printf("Площадь круга : PI*r*r = %f\n",PI*r*r);
            break;
        case 'P':
            float a, b;
            printf("Введите сторону А\n");
            scanf("%f", &a);
            printf("Введите сторону B\n");
            scanf("%f", &b);
            if(a = b){
                printf("Это не прямоугольник, а квадрат, введите данные заного \n"); // можно периметр и площадь и для него посчитать, но нам нужен прямоунольник
                break;
            }
            printf("Периметр прямоугольника : a*2+b*2 = %f\n",a*2+b*2);
            printf("Площадь прямоугольника : a * b = %f\n", a * b);
            break;
        case 'T':
            float a1, b1, c, p;
            printf("Введите сторону А\n");
            scanf("%f", &a1);
            printf("Введите сторону B\n");
            scanf("%f", &b1);
            printf("Введите сторону C\n");
            scanf("%f", &c);
            if(a1 <= 0 or b1 <= 0 or c <=0){
                printf("Такого не существует, пиши нормальные цифры Qij!!!!! \n");
            }
            if((a1 + b1) > c and (b1 + c) > a1 and (c + a1) > b1){
                printf("Треугольник существует \n");
                p = a1 + b1 + c;
                printf("Периметр треугольника = %f\n", p);
                p = p / 2;
                a = sqrt(p * (p - a1) * (p - b1) * (p - c));
                printf("Площадь треугольника = %f\n", a);
            }
            else{
                printf("Треугольник не существует \n");
                break;
            }
        default:
            break;
    }
}