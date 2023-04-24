#include "BookRepository.h"
#include <stdexcept>

void BookRepository::addBook(Book book) {
    books_.push_back(book);
}

void BookRepository::updateBook(Book book) {
    for (auto& b : books_) {
        if (b.getId() == book.getId()) {
            b.setTitle(book.getTitle());
            b.setAuthor(book.getAuthor());
            b.setYear(book.getYear());
            break;
        }
    }
}

void BookRepository::deleteBook(int bookId) {
    books_.erase(std::remove_if(books_.begin(), books_.end(),
        [bookId](const Book& b) { return b.getId() == bookId; }), books_.end());
}

Book BookRepository::getBook(int bookId) const {
    for (const auto& b : books_) {
        if (b.getId() == bookId) {
            return b;
        }
    }
    throw std::invalid_argument("Book not found");
}

std::vector<Book> BookRepository::getAllBooks() const {
    return books_;
}
