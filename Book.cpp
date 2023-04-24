#include "Book.h"

Book::Book(int id, std::string title, std::string author, int year)
    : id_(id), title_(title), author_(author), year_(year) {}

int Book::getId() const {
    return id_;
}

std::string Book::getTitle() const {
    return title_;
}

std::string Book::getAuthor() const {
    return author_;
}

int Book::getYear() const {
    return year_;
}

void Book::setTitle(std::string title) {
    title_ = title;
}

void Book::setAuthor(std::string author) {
    author_ = author;
}

void Book::setYear(int year) {
    year_ = year;
}
