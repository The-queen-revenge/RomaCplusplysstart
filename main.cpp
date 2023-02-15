//#include<stdio.h>
//#include<iostream>
//#include<locale.h>
//
//using namespace std;
//
//// ЭКСПЕРИМЕНТАЛЬНОЕ ИССЛЕДОВАНИЕ МЕТОДОВ РАСПРЕДЕЛЕНИЯ ПАМЯТИ
//
///*
//   0) Исследовать адреса переменных внутрий функций (main, A1, B1, C1);
//   1) Вывести адрес функции main
//   2) Вывести адреса функций A1, B1, C1
//   3) Создать функции D1 и E1, подобные по содержанию функциям A1, B1, C1
//   4) Увеличить вложенность вызываемых функций.
//        Пример: A1 -> B1 -> C1 -> D1 -> E1
//   5) Вывести адреса вложенных функций.
//*/
//void E1()
//{
//    bool  n, * pn;
//    int x, * px;
//    n = true;
//    x = 12;
//    pn = &n;
//    px = &x;
//    printf("Функция E1\n");
//
//    printf(" bool n = %i\n int x = %i\n", n, x);
//    printf("  -pn -> 0x%x\n  -px -> %p\n", pn, px);
//}
//void D1()
//{
//    bool  n, * pn;
//    int x, * px;
//    n = true;
//    x = 12;
//    pn = &n ;
//    px = &x;
//    E1();
//    printf("Функция D1\n");
//    printf(" bool n = %i\n int x = %i\n", n, x);
//    printf("  -pn -> 0x%x\n  -px -> %p\n", pn, px);
//}
//void  C1(void)
//{
//    char  n, * pn;
//    pn = &n;
//    *pn = 'L';
//    D1();
//    printf("\nФункция C1\n");
//    printf(" char n = %c\n", n);
//    printf(" -pn -> %p\n", pn);
//
//}
//void  B1(void)
//{
//    bool  n, * pn;
//    int x, * px;
//    n = true;
//    x = 12;
//    pn = &n;
//    px = &x;
//    C1();
//    printf("Функция B1\n");
//    printf(" bool n = %i\n int x = %i\n", n, x);
//    printf("  -pn -> 0x%x\n  -px -> %p\n", pn, px);
//}
//
//void  A1(void)
//{
//    char  n, * pn;
//    float x, * px;
//    n = 'Y';
//    x = 5.43;
//    pn = &n;
//    px = &x;
//    B1();
//    printf("\nФункция A1\n");
//
//    printf(" char n = %c\n float x = %f\n", n, x);
//    printf("  -pn -> %p\n  -px -> %p\n", pn, px);
//}
//
//
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    char c, * pc;
//    int n, * pn;
//
//    c = 'Z';
//    n = 32767;
//
//    pc = &c;
//    pn = &n;
//
//    A1();
//    //C1();
//
//    printf("\nmain\n");
//
//    printf(" char c = %c\n int n = %i\n", c, n);
//    printf(" -pc -> %p\n -pn -> %p\n\n Подпрограммы\n  -A1 -> %p\n  -B1 -> %p\n  -C1 -> %p\n -D1 -> %p\n -E1 -> %p", pc, pn, &A1, &B1, &C1, &D1, &E1);
//
//    printf("\n-main -> %p\n-A1 -> %p\n-B1 -> %p\n-C1 -> %p", &main,&A1,&B1,&C1);
//
//    return 0;
//}
//
/*    int i, num;
    cout << "Введите число, делители которого хотите найти \n";
    cin >> num;
    for(i = 1; i < num; i++){
        if(num % i ==0){
            cout <<"Делитель: " << i << "\n";
        }
    }
}*/