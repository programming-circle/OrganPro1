#include <string.h>
#include <iostream>
using namespace std;


class Car {
private:
    string name;
public:
    Car() {
        name = "Car";
    }

    string getName() {
        return this->name;
    }

    // Непонятно зачем нужен конструктор копирования? Мы же его использовали чтобы копировать что-то из одного класса в другой? А тут ничего нет в задании для копирования.

};


int main()
{
    std::cout << "Hello World!\n";
}