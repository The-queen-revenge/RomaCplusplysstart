/* 3. Ввести 5 дробных чисел и после ввода каждого числа вывести среднее арифметическое введённой части последовательности. */
#include <iostream>
#include <stdio.h>
using namespace std;
int mai(){
    system("chcp 65001");
    float x,i,s,a;
    printf("Вводите 5 числе через Enter: ");
    s=0;
    for(i=1;i<=5;i++){
        scanf("%f",&x); // получаем дробное число
        s=s+x;
        a=s/i; // подсчет среднего арифметического чисел

        printf("Среднее арифметическое: %f\n",a); // вывод среднего арифметического чисел
    }
}