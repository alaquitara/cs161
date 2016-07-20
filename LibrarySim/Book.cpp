//
//  Book.cpp
//  LibrarySim
//
//  Created by Alexander Laquitara on 6/2/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Author: Alexander Laquitara
 ** Date:6/7/2015
 ** Description: Book implementation file
 *********************************************************************/


#include "Book.hpp"


Book::Book(std::string idc, std::string t, std::string a)
{
    idCode = idc;
    title = t;
    author = a;
    setLocation(ON_SHELF);
    setCheckedOutBy(NULL);
    setRequestedBy(NULL);
    
}

std::string Book::getIdCode()
{
    return idCode;
}
std::string Book::getTitle()
{
    return title;
}
std::string Book::getAuthor()
{
    return author;
}
Locale Book::getLocation()
{
    return location;
}
void Book::setLocation(Locale loc)
{
    location = loc;
}
Patron* Book::getCheckedOutBy()
{
    return checkedOutBy;
}
void Book::setCheckedOutBy(Patron* p)
{
    checkedOutBy = p;
}
Patron* Book::getRequestedBy()
{
    return requestedBy;
}
void Book::setRequestedBy(Patron* p)
{
    requestedBy = p;
}
int Book::getDateCheckedOut()
{
    return dateCheckedOut;
}
void Book::setDateCheckedOut(int d)
{
    dateCheckedOut = d;
}