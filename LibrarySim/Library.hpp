//
//  Library.h
//  LibrarySim
//
//  Created by Alexander Laquitara on 6/2/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Author: Alexander Laquitara
 ** Date:6/7/2015
 ** Description: Library Header file
 *********************************************************************/



#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <string>
#include <vector>
#include "Patron.hpp"

class Library
{
private:
    std::vector<Book*> holdings;
    std::vector<Patron*> members;
    int currentDate;
public:
    Library();
    void addBook(Book*);
    void addPatron(Patron*);
    std::string checkOutBook(std::string pID, std::string bID);
    std::string returnBook(std::string bID);
    std::string requestBook(std::string pID, std::string bID);
    std::string payFine(std::string pID, double payment);
    void incrementCurrentDate();
    Patron* getPatron(std::string pID);
    Book* getBook(std::string bID);
    
    
    std::string returnStringLocal(int);
    bool checkBook(std::string bookID);
    bool checkMember(std::string patronID);
};

#endif