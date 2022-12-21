#include <iostream> //Найти все делители целого положительного числа за оптимальное\минимальное количество  итераций
#include <stdio.h>// вернуть все делители
#include <cmath>
using namespace std;
int mainои()
{
    int number = 0;
    int i = 1;
    int poww = 0;
    int counter = 0;
    int counter1 = 0;
    int num = 0;
    printf("Введите число, делители которого хотите найти. Программа выведет количество затраченных итераций и количество делителей \n");
    scanf("%d",&number);
    poww = int(pow(number,0.5));
    for(i;i<poww;){
        if (number%i==0){
            counter1++;
            num = number/i;
            if (i=number/num){
                counter1++;
            }
        }
        counter++;
        i++;
    }
    printf("Количество итераций:");
    printf("%d \n",counter);
    printf("количество делителей:");
    printf("%d \n",counter1);
}
