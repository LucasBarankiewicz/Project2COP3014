#include "ContactsManager.hpp"
#include <iostream>

using namespace std;

ContactsManager::ContactsManager()
{
    counter = 0;
}

void ContactsManager::addContact()
{
    Contact newContact("name", "email", 1234);
    contacts[counter] = newContact;
    counter++;
}

void ContactsManager::displayAllContacts()
{
    cout << "List of all contacts: " << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << contacts[i].getName() << " ";
        cout << contacts[i].getEmail() << " ";
        cout << contacts[i].getPhoneNumber() << endl;

    }
    
}

void ContactsManager::removeContact()
{
    cout << "Enter the index that you want to remove" << endl;
    int index;
    cin >> index;

    for (int i = index; i < counter - 1; i++)
    {
        contacts[i] = contacts[i+1];
        counter--;
    }
}

void ContactsManager::editContact()
{
    cout << "Edit a contact:" << endl;
    int index;
    cin >> index;

    for (int i = index; i < counter; i++)
    {
        cout << contacts[i].getName() << " ";
        cout << contacts[i].getEmail() << " ";
        cout << contacts[i].getPhoneNumber() << endl;

        cout <
    }
    

    
}

void ContactsManager::searchContact()
{

}

void ContactsManager::exit()
{

}