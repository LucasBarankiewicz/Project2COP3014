#include "Contact.hpp"
#include <iostream>
#include <string>

using namespace std;

Contact::Contact()
{
    
}

Contact::Contact(string name, string email, int phone)
{
   this->phoneNumber = phone;
   this->name = name;
   this->email = email;
}

void Contact::setPhoneNumber(int phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

int Contact::getPhoneNumber()
{
    return this->phoneNumber;
}

void Contact::setName(string name)
{
    this->name = name;
}

string Contact::getName()
{
    return this->name;
}

void Contact::setEmail(string email)
{
    this->email = email;
}

string Contact::getEmail()
{
    return this->email;
}