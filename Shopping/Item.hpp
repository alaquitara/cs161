//
//  Item.hpp
//  shopping
//
//  Created by Alexander Laquitara on 5/18/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Author: Alexander Laquitara
 ** Date: 5/18/15
 ** Description: Header file for Class Item
 *********************************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>

using namespace std;

#include <stdio.h>

class Item {
    private:
            string name;
            double price;
            int quantity;
    
    public:
            Item();
            Item(string, double, int);
    
            void setName(string);
            void setPrice(double);
            void setQuantity(int);
    
            string getName();
            double getPrice();
            int getQuantity();
    
    
    
    
};

#endif /* defined(__shopping__item__) */
