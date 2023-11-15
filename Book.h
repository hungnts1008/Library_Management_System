#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;

class Book {
   private:
    int ID;
    string author;
    string title;
    string publisher;
    int year;
    int page;
    int numCopies;

   public:
    Book();
    Book(int, const string &, const string &, const string &, int, int, int);

    int getID() const;
    string getAuthor() const;
    string getTitle() const;
    string getPublisher() const;
    int getYear() const;
    int getPage() const;
    int getNumCopies() const;

    void setID(int);
    void setAuthor(const string &);
    void setTitle(const string &);
    void setPublisher(const string &);
    void setYear(int);
    void setPage(int);
    void setNumCopies(int);

    bool available() const;
    void borrowBook() const;
    void returnBook() const;
};

#endif