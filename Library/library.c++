#include <iostream>
#include <string>
#include <vector>

class Book {
public:
    Book(const std::string& title, const std::string& author, int year)
        : title_(title), author_(author), year_(year) {}

    std::string getTitle() const {
        return title_;
    }

    std::string getAuthor() const {
        return author_;
    }

    int getYear() const {
        return year_;
    }

private:
    std::string title_;
    std::string author_;
    int year_;
};

class Library {
public:
    void addBook(const Book& book) {
        books_.push_back(book);
    }

    void displayAllBooks() const {
        std::cout << "Books in the library:\n";
        for (const Book& book : books_) {
            std::cout << "Title: " << book.getTitle() << "\n";
            std::cout << "Author: " << book.getAuthor() << "\n";
            std::cout << "Year: " << book.getYear() << "\n\n";
        }
    }

private:
    std::vector<Book> books_;
};

int main() {
    Library library;

    // Add some books to the library
    library.addBook(Book("Advanced C++ Programming ", "Terence Faid JABO", 2002));
    library.addBook(Book("DataStructures and Algorithms", "Kairos M Martial", 1960));
    library.addBook(Book("Introduction to JavaScript", "IGIRANEZA Daniel", 2020));

    // Display all books in the library
    library.displayAllBooks();

    return 0;
}