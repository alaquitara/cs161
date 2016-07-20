//
//  ShoppingCart.cpp
//  shopping
//
//  Created by Alexander Laquitara on 5/18/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//

/*********************************************************************
 ** Author: Alexander Laquitara
 ** Date: 5/18/15
 ** Description: Class Implementation file for Class ShoppingCart
 *********************************************************************/
#include <iostream>
using namespace std;
#include "ShoppingCart.hpp"
#include "Item.hpp"

ShoppingCart::ShoppingCart()//initializes each element of the array to NULL and initializes arrayEnd to zero.
{
     *arrBasket = NULL;
     arrayEnd = 0;
}

/*********************************************************************
 **                    ShoppingCart::addItem
 ** Description: Adds an item object to the basket array
 ** Parameters: Pointer to an Item object
 *********************************************************************/
void ShoppingCart::  addItem(Item *newItem) 
{
    arrBasket[arrayEnd] = newItem;
    arrayEnd++;
    
}

/*********************************************************************
 **                    ShoppingCart::totalPrice
 ** Description: Totals and returns the price off all item objects in the cart
 ** Parameters: None
 *********************************************************************/
double ShoppingCart::totalPrice()
{
    double runningTotal;
    
    for(int i=0; i < arrayEnd; i++)
    {
        runningTotal += arrBasket[i]->getPrice() * arrBasket[i]->getQuantity();
    }
    
    return runningTotal;
}

/*int main()
{
    
    Item a("bananas", 0.50, 2);
    Item b("buffalos", 1.0, 1);
    ShoppingCart myCart;
    myCart.addItem(&a);
    myCart.addItem(&b);
    cout<< "Item: "<< &a<< endl;
    //cout <<"total price: "<< myCart.totalPrice()<< endl;
    
    return 0;
}*/


void deleteItem(int);

void List::deleteItem(int pos)
{
    for(int i = 0; i < size; i++)
    {
        if( i == pos)
        {
            shoppingCart[i] = shoppingCart[i+1];
            for(i = pos; i<size; i++)
            {
                shoppingCart[i] = shoppingCart[i +1];
            }
            size--;
        }
    }
}




