#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <string>

using namespace std;

class Contact
{
    private:
      int phoneNumber;
      string name;
      string email;

    public:
      Contact();
      Contact(string name, string email, int phone);
      void setPhoneNumber(int phoneNumber);
      int getPhoneNumber();
      void setName (string name);
      string getName();
      void setEmail(string email);
      string getEmail();

};

#endif 