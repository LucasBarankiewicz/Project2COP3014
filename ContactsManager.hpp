#ifndef CONTACTSMANAGER_HPP
#define CONTACTSMANAGER_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

using namespace std;

class ContactsManager
{
    private:

    int counter;
    Contact contacts[10];

    public:
    ContactsManager();
    void addContact();
    void removeContact();
    void editContact();
    void searchContact();
    void displayAllContacts();
    void exit();

    
};

#endif