#include <iostream>// сначала создает массив, а потом сжимает его
#include <stack>
#include <stdio.h>
using namespace std;
/*void compress(int* ptr, int *sz, int cngN){
    *sz = *sz - cngN;// новый размер
    int *tmp = new int[*sz]();
    for(int i = 0;i < *sz; i ++){
        tmp[i] = ptr[i];
    }
    delete[]ptr;
    ptr = new int[*sz]();
    for(int i = 0; i < *sz; i++){
        ptr[i] = tmp[i];
    }
    delete[] tmp;
}
int main() {
    system("chcp 65001");
    int D;
    int SZ = 5;
    int *mas = new int[SZ]{1, 2, 3, 4, 5,};
    printf("оригинальный массив ");
    for (int i = 0; i < SZ; i++) {
        printf("%i", mas[i]);
    }
    cout << endl;
    cout << "Введите число, на которое хотите сократить массив";
    cin >> D;
    compress(mas, &SZ, D);// при изменении cngN будет изменятся значение на которое массив будет сжат
    printf("\n сжатый массив ");
    for (int i = 0; i < SZ; i++) {
        printf("%i", mas[i]);
    }
    return 0;
}
*/
/*void expand(int* ptr, int *sz, int cngN){ // создает массив, а потом расширяет его на заданое значение (ячейки)
    *sz = *sz + cngN;// новый размер
    int *tmp = new int[*sz]();
    for(int i = 0;i < *sz; i ++){
        tmp[i] = ptr[i];
    }
    delete [] ptr;
    ptr = new int[*sz]();
    for(int i = 0; i < *sz; i++){
        ptr[i] = tmp[i];
    }
    delete[] tmp;
}
int main(){
    system("chcp 65001");
    int SZ = 5;
    int D;
    int i = 0;
    int *mas = new int[SZ]{1,2,3,4,5};
    printf("Оригинальный массив ");
    for(i = 0; i < SZ; i++){
        printf("%i", mas[i]);
    }
    cout << endl;
    cout << "Введите число, которое хотите добавить в массив";
    cin >> D;
    expand(mas, &SZ, D);
    printf("\n увеличенный массив ");
    for (int i = 0; i < SZ; i++) {
        mas[i]=i;
        printf("%i", mas[i]);
    }
    return 0;
}
*/
/*int main() {
    system("chcp 65001");
    stack <int> steck;  // создаем стек
    int i = 0;
    cout << "Введите шесть любых целых чисел: " << endl;
    while (i != 6) {
        int a;
        cin >> a;
        steck.push(a);  // добавляем введенные числа
        i++;
    }
    if (steck.empty()){
        cout << "Стек пуст \n";  // проверяем пуст ли стек (нет)
    }
    cout << "Верхний элемент стека: " << steck.top() << endl;
    cout << " Удалим верхний элемент " << endl;
    steck.pop();  // удаляем верхний элемент
    cout << " Новый верхний элемент: " << steck.top(); // выводим новый верхний элемент

    return 0;
}*/
/* 1.Найти все делители целого положительного числа за оптимальное/минимальное количество итераций. Вывести количество затраченных итераций.
int main(){
    system("chcp 65001");
    int x,d=1;
    repeat:
    puts("Введите положительное число: ");
    scanf("%d",&x);

    if (x<=0){
        goto repeat;
    }
    for (d;d<=x;d++){
        if (x%d==0){
            if ((d!=x) and (d!=1)){
                printf("Делитель: %i\n",d);
            }
        }
    }
}
 */
