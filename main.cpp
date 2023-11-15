#include <bits/stdc++.h>

#include "library.h"
using namespace std;
int main() {
    Library lib;
    while (1) {
        cout << "******************\n";
        lib.showBook();
        cout << "******************\n";
        cout << "1. Add Book\n2. Remove Book\n3. Rent Book\n4. Return Book\n5. Exit\n";
        int type;
        cin >> type;
        if (type == 1) {
            cout << "Enter name and id of book:\n";
            string name;
            int id;
            cin >> name >> id;
            lib.addBook(name, id);
        } else if (type == 2) {
            cout << "Enter name and id of the book you wanna remove:\n";
            string name;
            int id;
            cin >> name >> id;
            lib.removeBook(name, id);
        } else if (type == 3) {
            cout << "Enter name of the book you wanna rent:\n";
            string name;
            cin >> name;
            lib.rentBook(name);
        } else if (type == 4) {
            cout << "Enter name of the book you wanna return:\n";
            string name;
            cin >> name;
            lib.returnBook(name);
        } else if (type == 5) {
            break;
        }
    }
    return 0;
}