#pragma once

#include <string>

class Book {
public:
    Book(int id, std::string title, std::string author, int year);

    int getId() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
    void setTitle(std::string title);
    void setAuthor(std::string author);
    void setYear(int year);

private:
    int id_;
    std::string title_;
    std::string author_;
    int year_;
};