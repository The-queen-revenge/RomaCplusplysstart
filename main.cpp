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
}
#include <iostream>
#include <string>
using namespace std;

class Plant{
private: string name;
protected: int proto;
public:
    Plant ()
            : name("non"),
              proto(0)
    {}
    Plant (string name,int proto)
            : name(name),
              proto(0)
    {}
    void SetName(string name)
    {
        this->name = name;
    }
    string GetName()
    {
        return name;
    }
};

class Vegetable : public Plant
{
private:
    int ripeningTime;
    int productivity;
public:
    Vegetable ()
            : ripeningTime(0),
              productivity(0)
    {}
public:
    Vegetable (string name,int proto,int ripeningTime,int productivity):
            ripeningTime(ripeningTime),
            productivity(productivity){
        SetName(name);}
    void SetRipeningTime(int value)
    {
        this->ripeningTime = ripeningTime;
    }
public: int GetRipeningTime()
    {
        return ripeningTime;
    }
public: int SetProductivity(int value)
    {
        this->productivity = productivity;
    }
public: int GetProductivity()
    {
        return productivity;
    }

};

int main()
{
    Plant Pl;
    Plant plant[5] = { Plant("Дуб",0),Plant("Берёза",0),Plant("Тёмный дуб",0),Plant("Светлая Берёза",0),Plant("Тёмная берёза",0) };
    Vegetable Veg;
    cout << "Name:" <<Veg.GetName()<<endl<<"Ripening time:"<<Veg.GetRipeningTime()<<endl<<"productivity:"<<Veg.GetProductivity()<<endl;
    Vegetable Vasya("Vasya",100,50,5);
    cout << "Name:" <<Vasya.GetName()<<endl<<"Ripening time:"<<Vasya.GetRipeningTime()<<endl<<"productivity:"<<Vasya.GetProductivity()<<endl;
    for(size_t i = 0; i < 5; i++)
    {
        cout << "Name:" <<plant[i].GetName()<<endl;
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
void PrintOut(int x){
    printf("%i \n",x);
}
void PrintOut(double x){
    printf("%f \n",x);
}
void PrintOut(string x){
    printf("%s \n",x.c_str());
}
void PrintOut(char x){
    printf("%c \n",x);
}
void PrintOut(char x[]){
    printf("%s \n",x);
}
void PrintOut(int x[],int y){
    for (int i = 0; i < y; i++) {
        printf("%i ",x[i]);
    }
    printf("%i \n",x);
}
int main(){
    int a[5] = {1,2,3,4,5};
    PrintOut(1);
    PrintOut(1.1);
    PrintOut("Hello World");
    PrintOut('a');
    PrintOut("Hello");
    PrintOut(a,5);
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class CLoc
{
private: double longitude;
private: double latitude;
public: CLoc() :longitude(0), latitude(0) {}
public: CLoc(double longitude, double latitude) :longitude(longitude), latitude(latitude){}
public: double SetLongitude(double longitude)
    {
        this->longitude = longitude;
    }
public: double SetLatitude(double latitude)
    {
        this->latitude = latitude;
    }
public: double GetLongitude()
    {
        return longitude;
    }
public: double GettLatitude()
    {
        return latitude;
    }
    void Show()
    {
        cout <<"Latitude: " <<this->latitude << "\nLongitude: " << this->longitude << endl;
    }
    CLoc operator+(const CLoc& other) const {
        CLoc result;
        result.longitude = longitude + other.longitude;
        result.latitude = latitude + other.latitude;
        return result;
    }
};
int main()
{
    setlocale(LC_ALL,"rus");

    CLoc a(10,15);
    CLoc b(10,15);
    CLoc c = a + b;
    c.Show();
}
*/
// Создает файл с не менее 20 элементами. Заполнить его случайными значениями из диапазона 0÷20.

#include <iostream>
#include <fstream>


//ofstream - Создает и записывает в файлы(по умолчанию при каждом открытии файла она стирает все предыдущие записи)
// для того что бы она не стирала, а именно добавляла новые данные к уже существующим нужно приписать дополнительную команду
// пример: MyFile.open(path, ofstream::app); - ,будет добавлять данные
//ifstream - Читает из файлов

using namespace std;
int nbcube(){

    string path = "IDZ_1.txt";

    ofstream MyFile; // создание и открытие файла

    MyFile.open(path, ofstream::app); // дописывает данные в конец файла, не удаляя предыдущие

    if(!MyFile.is_open()){ // что-то типо проверки на ошибки
        cout << "Nixyat ne otkruloc" << endl;
    }
    else{
        for(int i =0; i < 20; i++){
            cout << "Введите число " << endl;

            int a;
            cin >> a;

            MyFile << a << endl;
        }
    }
    MyFile.close();

    return 0;



}