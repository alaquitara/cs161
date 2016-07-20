//
//  ShoppingCart.h
//  shopping
//
//  Created by Alexander Laquitara on 5/18/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Author: Alexander Laquitara
 ** Date: 5/18/15
 ** Description: Header file for Class ShoppingCart
 *********************************************************************/
#ifndef ShoppingCart_HPP
#define ShoppingCart_HPP

#include <stdio.h>



#include "Item.hpp"

class ShoppingCart
{
    private:
    
            Item *arrBasket [100]; 
            int arrayEnd;
    
    public:
             ShoppingCart();
    
    
            void addItem(Item *newItem);
            double totalPrice();
};

#endif 
