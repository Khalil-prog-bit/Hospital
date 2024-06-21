#include <iostream>
#include <string>
using namespace std;

class Phone {
public:
    int Memory;
    string Name;
    string Price;
    string Started_at;
    string Color;

    Phone(int memory, string name, string price, string started_at, string color)
        : Memory(memory), Name(name), Price(price), Started_at(started_at), Color(color) {}
};