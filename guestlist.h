#include <iostream>
#include <map>
#include <string>
using namespace std;



class Guest
{
public:
    string name;
    int room_allocated;
    bool status;

    Guest()
    {
        name = "";
        room_allocated = 0;
        status = 0;
    }

    Guest(string name)
    {
        this->name = name;
        this->room_allocated = 0;
        this->status = 0;
    }

    Guest(int room_allocated)
    {
        this->name = name;
        this->room_allocated = room_allocated;
        this->status = 0;
    }

    Guest(bool status)
    {
        this->name = name;
        this->room_allocated = 0;
        this->status = status;
    }

    Guest(string name, int room_allocated)
    {
        this->name = name;
        this->room_allocated = room_allocated;
        this->status = 0;
    }

    Guest(string name, bool status)
    {
        this->name = name;
        this->room_allocated = 0;
        this->status = status;
    }

    Guest(int room_allocated, bool status)
    {
        this->name = "";
        this->room_allocated = room_allocated;
        this->status = status;
    }

    Guest(string name, int room_allocated, bool status)
    {
        this->name = name;
        this->room_allocated = room_allocated;
        this->status = status;
    }

    // overloading << operator for printing class value

    friend ostream &operator<<(ostream &s, const Guest &m)
    {
        s << "Name : " << m.name << endl;
        s << "Room No. : " << m.room_allocated << endl;
        s << "Check in/out : " << m.status << endl;
        return s;
    }
};

map<string, Guest> GuestList;

void addguest(string Name = "", int room = 0, bool check = 0)
{
    Guest G;
    G.name = Name;
    G.room_allocated = room;
    G.status = check;
    GuestList.insert(make_pair(Name, G));
}

void deleteguest(string Name)
{

    GuestList.erase(Name);
}

void printguestinfo(string Name)
{

    if (GuestList.find(Name) == GuestList.end())
    {
        cout << "Entry not found" << endl;
    }
    else
    {
        cout << GuestList.at(Name) << endl;
    }
}