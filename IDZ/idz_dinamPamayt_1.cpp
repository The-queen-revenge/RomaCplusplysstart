#include <iostream>
//Массив целых чисел размерности 200 элементов разместить в динамической памяти.
// Заполнить его случайными значениями из диапазона 0÷20. Определить количество различных элементов в массиве.
#include <random>
using namespace std;
random_device rd; // В этом блоке создаем рандомные значения, согласно документации Microsoft
mt19937 gen(rd()); // сид
uniform_int_distribution<> dist(0, 20); // Генерируем случайные числа в диапазоне от 0, до 20

int main() {
    int *array = new int[200];
    for(unsigned i = 0; i < 200; i++) {
        array[i] = dist(gen);
        printf("%d\t", array[i]);
    }
    printf("\n");
    int *numberArray = new int[21];
    for(unsigned i = 0; i < 21; i++){
        numberArray[i] = -1;
    }
    for (unsigned i = 0; i < 200; i++)
        for (unsigned k = 0; k < 21; k++)
            if (array[i] == numberArray[k])
                break;
            else if (k == 20 && array[i] != numberArray[k])
                for (unsigned j = 0; j < 21; j++)
                    if (numberArray[j] == -1) {
                        numberArray[j] = array[i];
                        break;
                    }

    int unique = 0;

    for (unsigned i = 0; i < 21; i++)
        if (numberArray[i] != -1)
            unique++;

    printf("Number of unique values: %d", unique);

    delete[] numberArray;
    delete[] array;

    return 0;

}