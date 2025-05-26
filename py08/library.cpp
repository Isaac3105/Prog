#include <iostream>
#include "library.h"

Library::Library(){
    books = {};
}

void Library::add_book(string title, string author, int year){
    book liv = {title,author,year};
    books.push_back(liv);
}

book Library::find_book(string title){
    for(size_t i = 0; i < books.size(); i++){
        if(books[i].title == title){
            return books[i];
        }
    }
    return {"Not found"};
}

vector<book> Library::find_books(string author){
    std::vector<book> res = {};
    for(size_t i = 0; i < books.size(); i++){
        if(books[i].author == author){
            res.push_back(books[i]);
        }
    }
    return res;
}

vector<book> Library::find_books(int year){
    std::vector<book> res = {};
    for(size_t i = 0; i < books.size(); i++){
        if(books[i].year == year){
            res.push_back(books[i]);
        }
    }
    return res;
}

void Library::print_books() {
    for (size_t i = 0; i < books.size(); i++) {
        std::cout << books[i] << std::endl;
    }
}

