//
//  Library.cpp
//  LibrarySim
//
//  Created by Alexander Laquitara on 6/2/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Author: Alexander Laquitara
 ** Date:6/7/2015
 ** Description: Library Implementation file
 *********************************************************************/


#include "Library.hpp"
#include "Patron.hpp"
#include "Book.hpp"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

Library::Library()
{
    currentDate = 0;
    holdings.reserve(100);
    members.reserve(100);
}

/*********************************************************************
 ** Description:
 ** Adds a book to vector holdings
 *********************************************************************/
void Library::addBook(Book*)
{
    // checks to see if book is valid and adds it to holdings vector
    string  id;
    string  title;
    string  author;
    
    cout << "Insert name of book :";
    getline(cin,id);
    
    cout << "Tell me, what is the title? :";
    getline(cin,title);
    
    cout << "The aurthor is?:";
    getline(cin,author);
    
    Book newBook(id,title,author);
    
    if(checkBook(id))
    {
        holdings.push_back(&newBook);
    }
    else
    {
        cout << "Book already in the system" << endl;
    }
}

/*********************************************************************
 ** Description:
 ** Adds a patron to the vector members
 *********************************************************************/
void Library::addPatron(Patron*)
{
    // checks to see if patron is valid then adds them to members vector
    string id;
    string n;
    
    cout << "Patron's ID: ";
    getline(cin,id);
    
    cout << "Patron's Name: ";
    getline(cin,n);
    
    Patron newPatron(id,n);
    
    if(checkMember(id))
    {
        members.push_back(&newPatron);
    }
    else
    {
        cout << "ID in use" <<endl;
    }
}

/*********************************************************************
 ** Description:
 **  Checks out the book using enums in book.hpp
 *********************************************************************/

string Library::checkOutBook(string pID, string bID)
{
    string hold ="book on hold by other patron";
    string check ="book already checked out";
    
    Patron* checker;
    Book* checked;
    
    checker = getPatron(pID);
    checked = getBook(bID);
    
    if (checked == NULL)
    {return "book not found";}
    else if (checker == NULL)
    {return "patron not found";}
    
    if(checkBook(bID) != true)
    {
        //checks out book
        for( int i = 0; i < holdings.size(); i++)
        {
            //gets book out of holdings
            if(holdings[i]->getIdCode() == bID)
            {
                
                if(holdings[i]->getLocation() == 0)
                {
                    holdings[i]->setLocation(CHECKED_OUT);
                    //Connects Checkout to a Patron
                    
                    for(int j = 0; j < members.size(); j++)
                    {
                        if(members[j]->getIdNum() == pID)
                        {
                            holdings[i]->setCheckedOutBy(members[j]);
                            cout << "Book " << holdings[i]->getTitle() << " has just been checked out by "
                            << members[j]->getName() << endl;
                        }
                    }
                
                }
                //if book is on hold
               // else if(holdings[i]->getLocation() == 1)
                //{
                    //cout << "book on hold by other patron"<< endl;
                  //  return hold;
                //}
            
                //if book is checked out
                else if(holdings[i]->getLocation() == 2)
                {
                    //cout << "book already checked out" << endl;
                    return check;
                }
                else
                {
                    return hold;
                }
            }
        }
   }

   else
    {
        //cout<< "Book not found" << endl;
        return "book not found";
    }

    return 0;
}

/*********************************************************************
 ** Description:
 ** returns book using enums in book.hpp
 *********************************************************************/

string Library::returnBook(string bID)
{
    
    Book* checked;
    checked = getBook(bID);
    
    if (checked == NULL)
    {
        return "book not found";
    }

    
    
    for( int i = 0; i < holdings.size(); i++)
    {
        //Puts book on shelf
        if(holdings[i]->getIdCode() == bID)
        {
            holdings[i]->setLocation(ON_SHELF);
            //Un Connects Check out to a Patron
            holdings[i]->setCheckedOutBy(NULL);
        }
    }
    return 0;
}

/*********************************************************************
 ** Description:
 ** Allows a patron to request a book not on shelf based off enums
 *********************************************************************/
string Library::requestBook(string patronID, string bookID)
{
    Patron* patID;
    
    if(checkBook(bookID) != true)
    {
        for( int i = 0; i < holdings.size(); i++)
        {
            //Puts book on hold
            if(holdings[i]->getIdCode() == bookID)
            {
                // if currently on shelf
                if(holdings[i]->getLocation() == 0)
                {
                    holdings[i]->setLocation(ON_HOLD_SHELF);
                    //Connects Hold to a Patron
                    for(int j = 0; j < members.size(); j++)
                    {
                        if(members[j]->getIdNum() == patronID)
                        {
                            holdings[i]->setRequestedBy(members[j]);
                            cout << holdings[i]->getTitle() << " is now on hold for "
                            << members[j]->getName() << endl;
                        }
                    }
                }
                // if currently on hold
                else if(holdings[i]->getLocation() == 1)
                {
                    cout << "Already on hold by " << holdings[i]->getRequestedBy() << endl;
                }
                else
                {
                    for(int j = 0; j < members.size(); j++)
                    {
                        //if person already has book checked out
                        patID = holdings[i]->getCheckedOutBy();
                        if(patID->getIdNum() == patronID)
                        {
                            cout << "Already checked out by " << (holdings[i])->getRequestedBy() << endl;
                        }
                        else
                        {
                            holdings[i]->setRequestedBy(members[j]);
                            cout << holdings[i]->getTitle() << " is now on hold for "
                            << members[j]->getName() << endl;
                        }
                    }
                }
            }
        }
    }
    else
    {
        cout << "book not found" << endl;
    }
    return 0;
}

/*********************************************************************
 ** Description:
 ** applies 10 cent fine to each overdue book by patron per pay
 *********************************************************************/
void Library::incrementCurrentDate()
{
    int update;
    Patron* checkOut;
    string patID;
    double fineAMT;
    
    
    fineAMT = .10;
    
    for( int i = 0; i < holdings.size(); i++)
    {
        if(holdings[i]->getLocation() != 0)
        {
            update = holdings[i]->getDateCheckedOut() + 1;
            holdings[i]->setDateCheckedOut(update);
            if((holdings[i]->getDateCheckedOut() - currentDate) > 21)
            {
                // fine applied.
                checkOut = holdings[i]->getCheckedOutBy();
                patID = checkOut->getIdNum();
                members[i]->amendFine(fineAMT);
                
            }
        }
    }
    
    currentDate++;
    
    cout << "The new date is " << currentDate;
}

/*********************************************************************
 ** Description:
 ** Allows the patron to pay a fine
 *********************************************************************/
string Library::payFine(std::string patronID, double payment)
{
    if(checkMember(patronID)!= true)
    {
        for(int i = 0; i < members.size(); i++)
        {
            if(members[i]->getIdNum() == patronID)
            {
                members[i]->amendFine(payment);
                
            
                members[i]->getFineAmount();
                return "payment successful";
            }
        }
    }
    else
    {
        
        return "Patron not found";
    }
    return 0;
}

/*********************************************************************
 ** Description:
 ** Validates book object
 *********************************************************************/
bool Library::checkBook(string bookID)
{
    int count = 0;
    
    for( int i = 0; i < holdings.size(); i++)
    {
        if(holdings[i]->getIdCode() == bookID)
        {
            count++;
        }
    }
    
    if(count>0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

/*********************************************************************
 ** Description:
 ** validates Patron object
 *********************************************************************/
bool Library::checkMember(string pID)
{
    int count = 0;
    
    for( int i = 0; i < members.size(); i++)
    {
        if(members[i]->getIdNum() == pID)
        {
            count++;
        }
    }
    
    if(count>0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

/*********************************************************************
 ** Description:
 ** returns a pointer to a memeber pased off their ID
 *********************************************************************/
Patron* Library:: getPatron(std::string pID)
{
    Patron* patron;
    if(checkMember(pID)!=true)
    {
        for(int i = 0; i <  members.size(); i++)
        {
            if(members[i]->getIdNum() == pID)
            {
                cout << "Name : " << members[i]->getName() << endl;
                cout << "ID : " << members[i]->getIdNum() << endl;
                //Set the dollar format
                cout << "Fines $" << members[i]->getFineAmount() << endl;
                
                //checkouted books
                cout << "Books Checked Out" << endl;
                for( int j = 0; j < holdings.size(); j++)
                {
                    patron = holdings[j]->getCheckedOutBy();
                    if(pID == patron->getIdNum())
                    {
                        cout << "Book Name " << holdings[j]->getTitle() << endl;
                    }
                }
            }
        }
    }
    else
    {
        cout << "Patron not in system" << endl;
    }
    return 0;
}

Book* Library:: getBook(std::string bID)
{
    
    if(checkBook(bID) != true)
    {
        for( int i = 0; i < holdings.size(); i++)
        {
            if(holdings[i]->getIdCode() == bID)
            {
                cout << "ID : " << holdings[i]->getIdCode() << endl;
                cout << "Title : " << holdings[i]->getTitle() << std::endl;
                cout << "Author : " << holdings[i]->getAuthor() << std::endl;
                cout << "Location : " << returnStringLocal(holdings[i]->getLocation()) << endl;
                //if requested
                if(holdings[i]->getLocation() == 1)
                {					
                    cout << "Reserved by : " << holdings[i]->getRequestedBy() << endl;
                }
                //if checked out
                else if(holdings[i]->getLocation() == 2)
                {
                    cout << "Checked out by : " << holdings[i]->getCheckedOutBy() << endl;
                    //Add number of days left due
                }
            }
        }
    }
    else
    {
        cout << "That book doesnt exist" << endl;
    }
    return 0;
}



/*Patron* Library::getPatron(string pIDN)
{
    for(int i=0; i<members.max_size(); i++)
    {
        if(pIDN==members.at()->getIdNum)
        {
            return Patron*
        }
    }
}*/





/*********************************************************************
 ** Description:
 ** easier manipulation of enums
 *********************************************************************/
string Library::returnStringLocal(int enumStatus)
{
    //http://stackoverflow.com/questions/25015096/how-to-assign-enum-to-enum-variable
    if(enumStatus == 0)
    {
        return "on Shelf";
    }
    else if(enumStatus == 1)
    {
        return "on Hold";
    }
    else if(enumStatus == 2)
    {
        return "checked Out";
    }
    return 0;
}

/*bool Library::checkBook(string bookID)
{
    int count = 0;
    
    for( int i = 0; i < holdings.size(); i++)
    {
        if(holdings[i]->getIdCode() == bookID)
        {
            count++;
        }
    }
    
    if(count>0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool Library::checkMember(string patronID)
{
    int count = 0;
    
    for( int i = 0; i < members.size(); i++)
    {
        if(members[i]->getIdNum() == patronID)
        {
            count++;
        }
    }
    
    if(count>0)
    {
        return false;
    }
    else
    {
        return true;
    }
*/