#include "Member.h"

Member::Member() {
    this->ID = -1;
    this->name = "";
    this->address = "";
    this->phone = "";
    this->email = "";
}

Member::Member(int ID, const string &name, const string &address, const string &phone, const string &email) {
    this->ID = ID;
    this->name = name;
    this->address = address;
    this->phone = phone;
    this->email = email;
}

int Member::getID() const {
    return this->ID;
}

string Member::getName() const {
    return this->name;
}

string Member::getAddress() const {
    return this->address;
}

string Member::getPhone() const {
    return this->phone;
}

string Member::getEmail() const {
    return this->email;
}

vector<Book> Member::getBorrowedBook() const {
    return this->borrowedBooks;
}

void Member::setID(int ID) {
    this->ID = ID;
}

void Member::setName(const string &name) {
    this->name = name;
}

void Member::setAddress(const string &address) {
    this->address = address;
}

void Member::setPhone(const string &phone) {
    this->phone = phone;
}

void Member::setEmail(const string &email) {
    this->email = email;
}

bool Member::contains(const Book &book) {
    for (const Book &_book : borrowedBooks) {
        if (book.getID() == _book.getID()) {
            return true;
        }
    }
    return false;
}

bool Member::borrowBook(const Book &book) {
    if (!contains(book) && book.available()) {
        borrowedBooks.push_back(book);
        book.borrowBook();
    }
}

bool Member::returnBook(const Book &book) {
    book.returnBook();
    for (int i = 0; i < borrowedBooks.size(); i++) {
        if (borrowedBooks[i].getID() == book.getID()) {
            borrowedBooks.erase(borrowedBooks.begin() + i);
        }
    }
}