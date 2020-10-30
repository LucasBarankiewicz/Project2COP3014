#include "ContactsManager.hpp"
#include <iostream>

using namespace std;

int main()
{
    cout << "Start" << endl;
    ContactsManager manager;
    manager.addContact();
    manager.displayAllContacts();
    cout.flush();
    return 0;
}