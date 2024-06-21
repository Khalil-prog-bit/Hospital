#include <string>
#include <iostream>
using namespace std;

class Course {
public:
    int Id;
    string Name;
    double Price;
    string Started_at;
    int Students;

    Course(int id, string name, double price, string started_at, int students)
        : Id(id), Name(name), Price(price), Started_at(started_at), Students(students){ }

    void Get_course()
    {
        cout << "Id : " << Id << "Cours nomi : " << Name << "Oylik to'lov : " << "Boshlangan sana : " << Started_at << "O'quvchi soni : " << Students << endl;
    }
};