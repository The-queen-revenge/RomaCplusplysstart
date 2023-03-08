#include <stdio.h>

#define MAX_SIZE 20

int vebrhvbeurv() { // слздаем массив размерностью 20 элементов
    int arr[MAX_SIZE];
    int size = 0;

    // Открытие файла для чтения
    FILE *f = fopen("IDZ_1.txt", "r"); // так было в презентации
    if (f == NULL) { // проверяем на открытие или не открытие файла
        printf("Ошибка открытия файла\n");
        return 1;
    }

    // Чтение данных из файла
    while (fscanf(f, "%d ", &arr[size]) == 1) { // пока While true, то кол-во цифр увеличивается,

        size++;
        if (size >= MAX_SIZE) {
            break;
        }
    } // если наше количество чисел больше или равно максимальному размеру т е 20, то цикл прерывается

    // Закрытие файла
    fclose(f);


    // Открытие файла для записи
    f = fopen("IDZ_1.txt", "w");
    if (f == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }

    // Запись данных в файл
    int num_zeros = MAX_SIZE - size; // узнаем сколько нам не хватает 0
    for(int i = 0; i<MAX_SIZE-size-1;i++){
        fprintf(f, "%d ",0);
    }
    for(int i = 0; i<size;i++){
        fprintf(f, "%d ",arr[i]);
    }
    // Закрытие файла
    fclose(f);

    return 0;
}