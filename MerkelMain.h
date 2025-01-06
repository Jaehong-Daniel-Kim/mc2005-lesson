//
// Created by Jaehong Kim on 1/5/25.
//

#pragma once
#ifndef MERKELMAIN_H
#define MERKELMAIN_H
#include <vector>
#include "OrderBookEntry.h"
#include "OrderBook.h"

class MerkelMain {
    public:
        MerkelMain();
        /**
         * Call this to start sim
         */
        void init();
    private:
        void loadOrderBook();
        void printMenu();
        void printHelp();
        void printMarketStats();
        void enterOffer();
        void enterBid();
        void printWallet();
        void gotoNextTimeframe();
        int getUserOption();
        void processUserOption(int userOption);

        std::string currentTime;

        OrderBook orderBook{"20200317.csv"};
};

#endif //MERKELMAIN_H
