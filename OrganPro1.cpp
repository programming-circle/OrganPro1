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

    // ��������� ����� ����� ����������� �����������? �� �� ��� ������������ ����� ���������� ���-�� �� ������ ������ � ������? � ��� ������ ��� � ������� ��� �����������.

};


int main()
{
    std::cout << "Hello World!\n";
}