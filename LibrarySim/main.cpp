//
//  main.cpp
//  LibrarySim
//
//  Created by Alexander Laquitara on 6/2/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//



#include "Library.hpp"
#include <iostream>
using namespace std;

int main() {
    string idc ="1234";
    string t = "C++";
    string a = "endly";
    
    Book b (idc, t, a);
    
    string id= b.getIdCode();
    string tit= b.getTitle();
    string endly=b.getAuthor();
    
    cout<<id<< endl;
    cout<<tit<<endl;
    cout<<endly << endl;
    
    
    
    
    return 0;
}
