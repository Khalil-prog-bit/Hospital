#include <iostream>
#include <string>
#include <list>
#include "Phone.cpp"


using namespace std;

list<Phone> Phones;

string AddPhone(Phone newPhone)
{
    Phones.push_back(newPhone);
    return newPhone.Name;
}
string Get_Phones() 
{
    for (auto phone : Phones)
    {
        
    }
}

int main()
{
    int memory;
    string name, started_at, color,price;

    for (int i = 0; i < 2; i++)
    {
        cout << "Name : ";
        cin >> name;

        cout << "Price : ";
        cin >> price;

        cout << "Started_at : ";
        cin >> started_at;

        cout << "Color :";
        cin >> color;

        cout << "Memory : ";
        cin >> memory;
        
        cout << endl;

        Get_Phones;
    }
}