#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <vector>

#include "Book.h"
#include "Person.h"

class Member : public Person {
   private:
    int ID;
    string name;
    string address;
    string phone;
    string email;
    vector<Book> borrowedBooks;

   public:
    Member();
    Member(int, const string &, const string &, const string &, const string &);

    int getID() const;
    string getName() const;
    string getAddress() const;
    string getPhone() const;
    string getEmail() const;
    vector<Book> getBorrowedBook() const;

    void setID(int);
    void setName(const string &);
    void setAddress(const string &);
    void setPhone(const string &);
    void setEmail(const string &);

    bool contains(const Book &);
    bool borrowBook(const Book &);
    bool returnBook(const Book &);
};

#endif