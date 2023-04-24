#pragma once

#include <vector>
#include "Book.h"

class BookRepository {
public:
    void addBook(Book book);
    void updateBook(Book book);
    void deleteBook(int bookId);
    Book getBook(int bookId) const;
    std::vector<Book> getAllBooks() const;

private:
    std::vector<Book> books_;
};