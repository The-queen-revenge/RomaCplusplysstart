#include <iostream>
#include <stdio.h>
using namespace std;
int vgh(){
    system("chcp 65001");
    printf("Введите три разных числа через Enter: ");
    int a, b, c, max1, max2, max3;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c); // получение 3-х введенных чисел от пользователя
    while ((a==b) and (b==c) and (a==c)){
        printf("Числа одинаковые! Введите разные числа через Enter:");
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
    } // цикл, который возобновляет ввод чисел, если пользователь ввел три одинаковых числа
    if (a>b){
        max1=a;
        max2=b;
    }
    else{
        max1=b;
        max2=a;
    }
    if (max1>c){
        if (max2>c){
            max3=c;
        }
        else{
            max3=max2;
            max2=c;
        }
    }
    else{
        max3=max2;
        max2=max1;
        max1=c;
    } //  нахождение минимального, среднего и максимального числа
    printf("%d,%d,%d", max1,max2,max3);
}
