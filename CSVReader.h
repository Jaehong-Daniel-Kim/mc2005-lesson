//
// Created by Jaehong Kim on 1/6/25.
//
#pragma once
#ifndef CSVREADER_H
#define CSVREADER_H
#include "OrderBookEntry.h"
#include <vector>
#include <string>



class CSVReader {
    public:
        CSVReader();

        static std::vector<OrderBookEntry> readCSV(std::string csvFilename);

    private:
        static std::vector<std::string> tokenise(std::string csvLine, char separator);
        static OrderBookEntry stringsToOBE(std::vector<std::string> tokens);
};



#endif //CSVREADER_H
