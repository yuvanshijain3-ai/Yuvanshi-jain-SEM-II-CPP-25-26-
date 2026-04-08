#include <iostream>
using namespace std;

class Library {
    string title;
    int stock;
public:
    Library(string t, int s) {
        title = t;
        stock = s;
    }
    void issueBook() {
        cout << "Book: " << title << endl;
        if(stock > 0) {
            stock--;
            cout << "Book Issued successfully. Remaining: " << stock << endl;
        } else {
            cout << "Sorry, Book Out of Stock." << endl;
        }
    }
};

int main() {
    Library b1("C++ Programming", 2);
    b1.issueBook();
    b1.issueBook();
    b1.issueBook(); // This will trigger the "Out of Stock" condition
    return 0;
}