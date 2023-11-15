#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include <iostream>

#include "Person.h"
using namespace std;
class Librarian : public Person {
   public:
    int ID;
    string name;
    string address;
    string phone;
    string email;

   private:
    Librarian();
    Librarian(int, const string &, const string &, const string &, const string &);

    int getID() const;
    string getName() const;
    string getAddress() const;
    string getPhone() const;
    string getEmail() const;

    void setID(int);
    void setName(const string &);
    void setAddress(const string &);
    void setPhone(const string &);
    void setEmail(const string &);
};

#endif