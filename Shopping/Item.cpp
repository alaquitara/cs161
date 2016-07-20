//
//  Item.cpp
//  shopping
//
//  Created by Alexander Laquitara on 5/18/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//

/*********************************************************************
 ** Author: Alexander Laquitara
 ** Date: 5/18/15
 ** Description: Class Implementation file for Class Item
 *********************************************************************/

#include "Item.hpp"
using namespace std;

Item:: Item() // default constructor
{
    name = "";
    price = 0.0;
    quantity = 0;
}

Item:: Item(string newName, double newPrice, int newQuantity) //constructor allows for a name, price, and quantity   in item.
{
    setName(newName);
    setPrice(newPrice);
    setQuantity(newQuantity);
}

void Item:: setName(string newName)
{
    name = newName;
}

void Item:: setPrice(double newPrice)
{
    price = newPrice;
}

void Item:: setQuantity(int newQuantity)
{
    quantity = newQuantity;
}

string Item:: getName()
{
    return name;
}

double Item:: getPrice()
{
    return price;
}

int Item:: getQuantity()
{
    return quantity;
}












