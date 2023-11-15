#include "Book.h"

Book::Book() {
    this->ID = -1;
    this->author = "";
    this->title = "";
    this->publisher = "";
    this->year = -1;
    this->page = -1;
    this->numCopies = -1;
}

Book::Book(int ID, const string& author, const string& title, const string& publisher, int year, int page, int numCopies) {
    this->ID = ID;
    this->author = author;
    this->title = title;
    this->publisher = publisher;
    this->year = year;
    this->page = page;
    this->numCopies = numCopies;
}
int Book::getID() const {
    return this->ID;
}

string Book::getAuthor() const {
    return this->author;
}

string Book::getTitle() const {
    return this->title;
}

string Book::getPublisher() const {
    return this->publisher;
}

int Book::getYear() const {
    return this->year;
}

int Book::getPage() const {
    return this->page;
}

int Book::getNumCopies() const {
    return this->numCopies;
}

void Book::setID(int ID) {
    this->ID = ID;
}

void Book::setAuthor(const string& author) {
    this->author = author;
}

void Book::setTitle(const string& title) {
    this->title = title;
}

void Book::setPublisher(const string& publisher) {
    this->publisher = publisher;
}

void Book::setYear(int year) {
    this->year = year;
}

void Book::setPage(int page) {
    this->page = page;
}

void Book::setNumCopies(int numCopies) {
    this->numCopies = numCopies;
}

bool Book::available() const {
    return numCopies > 0;
}

void Book::borrowBook() const {
    this->numCopies--;
}

void Book::returnBook() const {
    this->numCopies++;
}
