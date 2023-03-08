//Класс Почтовый адрес. Для объектов класса должны быть предусмотрены конструктор, деструктор и функции
// изменения индекса, города, улицы, номера дома, корпуса, квартиры, вывод адреса на экран.
//В функции main проверить эти методы.
// что такое инкапсуляция и какое она имеет отношениие к ООП
// зачем нужен конструктор
//зачем деструктор 


#include <iostream>
#include <string>
using namespace std;

// get и set обыкновенные методы класса, которые отвечают за взаимодействие с каким то конкретным полем

class Postal_Address { // Postal_Address это по факту свой тип данных как (int а) или (int b)

private: // а зачем в приват, ну что бы какой-то дурачок не смог поменять это то понятно(хотя приват можно было и не
    // писать, тк в классах по умолчанию стоит приват)

    int index;
    string town;
    string street;
    int house_number;
    int corpus;
    int flat;

public: // если хотим свой конструктор, то должны запихнуть его в паблик

    Postal_Address(int valueIndex, string valueTown, string valueStreet, int valueHouse_number, int valueCorpus,
                   int valueFlat) { // создали свой собственный конструктор, что бы он не создавался по умолчанию
        index = valueIndex;
        street = valueStreet;
        town = valueTown;
        house_number = valueHouse_number;
        flat = valueFlat;
        corpus = valueCorpus;
    }

    ~Postal_Address() { // это деструктор(перед ним ставиться знак "тильда") + у деструктора не может быть параметров +
        // обычно в деструкторе идет высвобождение динамической памяти
    }

   int GetIndex() {
        return index;
    }
    void SetIndex(int valueIndex) {
        index = valueIndex;
    }

    string GetStreet() {
        return street;
    }
    void SetStreet(string valueStreet) {
        street = valueStreet;
    }
    string GetTown() {
        return town;
    }
    void SetTown(string valueTown) {
        town = valueTown;
    }
    int GetHouse_number() {
        return house_number;
    }
    void SetHouse_number(int valueHouse_number) {
        house_number = valueHouse_number;
    }
    int GetCorpus() {
        return corpus;
    }
    void SetCorpus(int valueCorpus) {
        corpus = valueCorpus;
    }
    int GetFlat() {
        return flat;
    }
    void SetFlat(int valueFlat) {
        flat = valueFlat;
    }

    void Print() { // эта функция часть шаблона Postal_Address
        cout << "Индекс - " << index << "\t Город - " << town <<"\n Улица - " << street <<"\t Номер дома - " << house_number <<
             "\n Корпус - " << corpus << "\t Квартира - " << flat;
    }
};

int имнгваигм() { // фигурные скобки это область видимости

    Postal_Address Information(249033, "Obninsk", "Lenina", 69,
                               1, 910);
    /*Information.SetIndex(249033);
    Information.SetStreet("Lenina");
    Information.SetTown("Obninsk ");
    Information.SetCorpus(1);
    Information.SetFlat(910);
    Information.SetHouse_number(69);*/

    Information.Print();

    return 0;
}
/*    Information.town = "Obninsk";
    Information.street = "Lenina";
    Information.house_number = 69;
    Information.index = 249033;                          // так в инкапсуляции делать не принято, тк нарушает ее правила
    Information.corpus = 1;
    Information.flat = 910;

    Information.Print(); // Вызов метода(функции) класса
*/




