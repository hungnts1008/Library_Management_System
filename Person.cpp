#include "Person.h"

Person::Person() {
    this->name = "";
    this->address = "";
    this->phone = "";
    this->email = "";
}

Person::Person(const string& name, const string& address, const string& phone, const string& email) {
    this->name = name;
    this->address = address;
    this->phone = phone;
    this->email = email;
}

string Person::getName() const {
    return this->name;
}

string Person::getAddress() const {
    return this->address;
}

string Person::getPhone() const {
    return this->phone;
}

string Person::getEmail() const {
    return this->email;
}

void Person::setName(const string& name) {
    this->name = name;
}

void Person::setAddress(const string& address) {
    this->address = address;
}

void Person::setPhone(const string& phone) {
    this->phone = phone;
}

void Person::setEmail(const string& email) {
    this->email = email;
}
