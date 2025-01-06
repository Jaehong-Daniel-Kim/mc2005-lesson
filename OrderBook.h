//
// Created by Jaehong Kim on 1/6/25.
//

#pragma once
#ifndef ORDERBOOK_H
#define ORDERBOOK_H
#include "OrderBookEntry.h"
#include "CSVReader.h"
#include <vector>
#include <string>



class OrderBook
{
    public:
        /**
        * constrcut, reading a csv data file
        */
        OrderBook(std::string filename);
        /**
        * return vector of all known products in the dataset
        */
        std::vector<std::string> getKnownProducts();
        /**
        * return vector of Orders according to the sent filters
        */
        std::vector<OrderBookEntry> getOrders(OrderBookType type,
                                              std::string product,
                                              std::string timestamp);

        /**
         * returns the earliest time in the order book
         */
        std::string getEarliestTime();

        /**
         * returns the next time after the sent time in the order book
         * if there is no next timestamp, wraps around to the start
         */
        std::string getNextTime(std::string timestamp);
        static double getHighPrice(std::vector<OrderBookEntry>& orders);
        static double getLowPrice(std::vector<OrderBookEntry>& orders);
    private:
        std::vector<OrderBookEntry> orders;
};



#endif //ORDERBOOK_H
