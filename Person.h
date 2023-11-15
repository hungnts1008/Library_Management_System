#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person {
   private:
    string name;
    string address;
    string phone;
    string email;

   public:
    Person();
    Person(const string&, const string&, const string&, const string&);
    string getName() const;
    string getAddress() const;
    string getPhone() const;
    string getEmail() const;

    void setName(const string&);
    void setAddress(const string&);
    void setPhone(const string&);
    void setEmail(const string&);
};

#endif