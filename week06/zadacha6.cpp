#include <iostream>
#include <string>

using namespace std;

enum Genre {
    NOVEL,
    POETRY,
    FANTASY,
    TECH,
    COMEDY,
};

struct Book {
    string title;
    string author;
    int year_published;
    double price;
    Genre genre;
};

void initializeBook (Book &book) {
    cout << "Please enter title: ";
    cin >> book.title;

    cout << "Please enter author: ";
    cin >> book.author;

    cout << "Please enter year of publication: ";
    cin >> book.year_published;

    cout << "Please enter price of book: ";
    cin >> book.price;

}

void apply_discount(Book *b_ptr, double discount_percent);

int main() {
    // zad 1

    Book book1;

    initializeBook(book1);

    cout << "Book title: " << book1.title << endl;
    cout << "Book author: " << book1.author << endl;
    cout << "Book year of publication: " << book1.year_published << endl;
    cout << "Book price: " << book1.price << endl;

    // zad 2

    Book books[3];

    for (int i = 0; i < 3; i++) {
        Book currBook;

        initializeBook(currBook);

        books[i] = currBook;
    }

    int minYear = books[0].year_published;
    Book oldestBook = books[0];

    for (int i = 1; i < 3; i++) {
        if (books[i].year_published < minYear) {
            minYear = books[i].year_published;
            oldestBook = books[i];
        }
    }

    cout << "The minimum year is: " << minYear << endl;
    cout << "Oldest book title: " << oldestBook.title << endl;

    // zad 3

    cout << "-------------------------------" << endl;
    cout << "Price before discount: " << book1.price << endl;;
    apply_discount(&book1, 0.20);
    cout << "New book price: " << book1.price << endl;

    // zad 4

    book1.genre = Genre::COMEDY;

    switch (book1.genre) {
        case Genre::COMEDY:
            cout << "The genre is comedy!";
            break;

        case Genre::FANTASY:
            cout << "The genre is fantasy!";
            break;

        case Genre::NOVEL:
            cout << "The genre is novel!";
            break;

        case Genre::POETRY:
            cout << "The genre is poetry";
            break;

        case Genre::TECH:
            cout << "The genre is tech!";
            break;
    }
}

void apply_discount(Book *b_ptr, double discount_percent) {
    double discountMultiplier = 1 - discount_percent;
    b_ptr -> price *= discountMultiplier;
}