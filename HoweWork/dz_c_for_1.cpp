/*#include <iostream> //Найти все делители целого положительного числа за оптимальное\минимальное количество  итераций
#include <stdio.h>  //выdести все делители !!!!


void RusConsoleOnWindows() { // функция для русского языка на Windows
#ifndef __unix__ // директива препроцесса, если не Unix
    // (директива препроцесса - инструкция, которую компилятор выполняет на стадии компилирования)
    // Компиляция (программирование) — трансляция программы, составленной на исходном языке высокого уровня,
    // в эквивалентную программу на низкоуровневом языке, близком машинному коду (абсолютный код, объектный модуль,
    // иногда на язык ассемблера), выполняемая компилятором.
    system("chcp 65001"); // команда в консоль для русского языка на Windows
#endif
}


using namespace std;
int cjacjcb(){
    RusConsoleOnWindows(); // вызов функции для русского языка на Windows

    int number = 0; // число, делители которого хотим найти
    int i = 1; // счетчик
    int counter = 0; // количество итераций
    int counter1 = 0; // количество делителей
    printf("Введите число, делители которого хотите найти. Программа выведет количество затраченных итераций и количество делителей \n"); // выводит на экран сообщение
    scanf("%d",&number); // считывает число с клавиатуры

    while (i <= (number / 2)){ // цикл, который ищет делители
        if (number % i == 0){ // если число делится на счетчик без остатка, то выводим делитель
            printf("Делитель:"); // выводим на экран сообщение
            printf("%d \n",i); // выводим на экран делитель
            counter1++; // считаем количество делителей
        }
        i++; // увеличиваем счетчик
        counter++; // считаем количество итераций
    }

    printf("Делитель:"); // выводим на экран сообщение
    printf("%d \n",number); // выводим на экран делитель
    counter1++; // считаем количество делителей
    counter++; // считаем количество итераций

    printf("Количество итераций:"); // выводим на экран сообщение
    printf("%d \n",counter); // выводим на экран количество итераций
    printf("количество делителей:"); // выводим на экран сообщение
    printf("%d \n",counter1); // выводим на экран количество делителей
    return 0;
}

*/
