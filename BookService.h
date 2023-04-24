#pragma once

#include "BookRepository.h"

class BookService {
public:
    void addBook(std::string title, std::string author, int year);
    void updateBook(int bookId, std::string title, std::string author, int year);
    void deleteBook(int bookId);
    Book getBook(int bookId) const;
    std::vector<Book> getAllBooks() const;

private:
    BookRepository bookRepository_;
};
