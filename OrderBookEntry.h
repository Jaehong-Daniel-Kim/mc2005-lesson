//
// Created by Jaehong Kim on 1/5/25.
//

#pragma once
#ifndef ORDERBOOKENTRY_H
#define ORDERBOOKENTRY_H
#include <string>


enum class OrderBookType{bid, ask, unknown};

class OrderBookEntry
{
public:
    OrderBookEntry(double _price,
                   double _amount,
                   std::string _timestamp,
                   std::string _product,
                   OrderBookType _orderType);
    static OrderBookType stringToOrderBookType(std::string s);

    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;
};

#endif //ORDERBOOKENTRY_H
