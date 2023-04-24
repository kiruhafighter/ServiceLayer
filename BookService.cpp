// BookService.cpp
#include "BookService.h"

void BookService::addBook(std::string title, std::string author, int year) {
    int id = bookRepository_.getAllBooks().size() + 1;
    Book book(id, title, author, year);
    bookRepository_.addBook(book);
}

void BookService::updateBook(int bookId, std::string title, std::string author, int year) {
    Book book = bookRepository_.getBook(bookId);
    book.setTitle(title);
    book.setAuthor(author);
    book.setYear(year);
    bookRepository_.updateBook(book);
}

void BookService::deleteBook(int bookId) {
    bookRepository_.deleteBook(bookId);
}

Book BookService::getBook(int bookId) const {
    return bookRepository_.getBook(bookId);
}

std::vector<Book> BookService::getAllBooks() const {
    return bookRepository_.getAllBooks();
}
