#include <iostream>
#include "guestlist.h"
using namespace std;

bool flag = 1;

void Guestlist_format()
{
    char a;
    cout << "1. Add Guest" << endl;
    cout << "2. Delete Guest Entry" << endl;
    cout << "3. Print Guest Entry" << endl;
    cin >> a;
    switch (a)
    {
    case '1':
    {
        string name;
        int room;
        bool status;
        cout << "Name : ";
        cin >> name;
        cout << "Room No. : ";
        cin >> room;
        cout << "status : ";
        cin >> status;
        addguest(name, room, status);
        break;
    }

    case '2':
    {
        string name;
        cout << "Enter Name of Guest: ";
        cin >> name;
        deleteguest(name);
        break;
    }

    case '3':
    {
        string name;
        cout << "Enter Name of Guest: ";
        cin >> name;
        printguestinfo(name);
        break;
    }

    default:
    {
        cout << "Wrong input try again!" << endl;
        break;
    }
    }
}

void format()
{
    char a;
    cout << "1. Guestlist" << endl;
    cout << "2. Exit" << endl;
    cin >> a;
    switch (a)
    {
    case '1':
    {
        Guestlist_format();
        break;
    }

    case '2':
    {
        cout << "Thankyou!!" << endl;
        flag = 0;
        break;
    }

    default:
    {
        cout << "Wrong input try again!" << endl;
        break;
    }
    }
}