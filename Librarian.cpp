#include "Librarian.h"

Librarian::Librarian() {
    this->ID = -1;
    this->name = "";
    this->address = "";
    this->phone = "";
    this->email = "";
}

Librarian::Librarian(int ID, const string &name, const string &address, const string &phone, const string &email) {
    this->ID = ID;
    this->name = name;
    this->address = address;
    this->phone = phone;
    this->email = email;
}

int Librarian::getID() const {
    return this->ID;
}

string Librarian::getName() const {
    return this->name;
}

string Librarian::getAddress() const {
    return this->address;
}

string Librarian::getPhone() const {
    return this->phone;
}

string Librarian::getEmail() const {
    return this->email;
}

void Librarian::setID(int ID) {
    this->ID = ID;
}

void Librarian::setName(const string &name) {
    this->name = name;
}

void Librarian::setAddress(const string &address) {
    this->address = address;
}

void Librarian::setPhone(const string &phone) {
    this->phone = phone;
}

void Librarian::setEmail(const string &email) {
    this->email = email;
}
