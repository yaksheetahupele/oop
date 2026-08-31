#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int price;

public:
    void acc()
    {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author: ";
        cin >> author;

        cout << "Enter price: ";
        cin >> price;
    }

    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b;

    b.acc();
    b.display();

    return 0;
}