#include <iostream>
#include "BookService.h"

int main() {
    BookService bookService;

    // Add a book
    bookService.addBook("The Great Gatsby", "F. Scott Fitzgerald", 1925);

    // Get a book
    Book book1 = bookService.getBook(1);
    std::cout << "Book 1: " << book1.getTitle() << " by " << book1.getAuthor()
        << ", published in " << book1.getYear() << std::endl;

    // Update a book
    bookService.updateBook(1, "The Catcher in the Rye", "J.D. Salinger", 1951);
    Book book2 = bookService.getBook(1);
    std::cout << "Book 1: " << book2.getTitle() << " by " << book2.getAuthor()
        << ", published in " << book2.getYear() << std::endl;

    // Delete a book
    bookService.deleteBook(1);
    try {
        Book book3 = bookService.getBook(1);
        std::cout << "Book 1: " << book3.getTitle() << " by " << book3.getAuthor()
            << ", published in " << book3.getYear() << std::endl;
    }
    catch (std::invalid_argument& e) {
        std::cout << "Book not found" << std::endl;
    }

    return 0;
}
