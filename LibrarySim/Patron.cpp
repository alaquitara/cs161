//
//  Patron.cpp
//  LibrarySim
//
//  Created by Alexander Laquitara on 6/2/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Author: Alexander Laquitara
 ** Date:6/7/2015
 ** Description: Patron Implementation file file
 *********************************************************************/


#include "Patron.hpp"
#include "Book.hpp"

using namespace std;

Patron::Patron(string idn, string n)
{
    idNum = idn;
    name = n;
    fineAmount = 0.0;
}
string Patron::getIdNum()
{
    return idNum;
}
string Patron::getName()
{
    return name;
}
vector<Book*> Patron::getCheckedOutBooks()
{
    return checkedOutBooks;
}
/*********************************************************************
 ** Description:
 ** adds a book to checked out books
 *********************************************************************/
void Patron::addBook(Book* b)
{
    checkedOutBooks.push_back(b);
}
/*********************************************************************
 ** Description:
 ** removes book from checked out books
 *********************************************************************/
void Patron::removeBook(Book* b)
{
    for(int i = 0; i < checkedOutBooks.size(); i++)
    {
        if(b->getIdCode() == checkedOutBooks[i]->getIdCode())
        {
            checkedOutBooks.erase(checkedOutBooks.begin() + i);
        }
    }
}
double Patron::getFineAmount()
{
    return fineAmount;
}
/*********************************************************************
 ** Description:
 **Allows library to fine a patron for late books
 *********************************************************************/
void Patron::amendFine(double amount)
{
    fineAmount += amount;
}
