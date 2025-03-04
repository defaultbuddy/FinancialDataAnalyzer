#ifndef CSV_READER_H
#define CSV_READER_H

#include <vector>
#include <string>

// Define the struct
struct Transaction {
    std::string date;
    double amount;
    std::string category;
};

// Declare the transactions vector (extern means it's defined elsewhere)
extern std::vector<Transaction> transactions;

// Declare the function for reading CSV file
void readCSV(const std::string& filename);

// Declare the function for calculating total expenses
double calculateNetProfit();

// Declare the function for finding the largest expense
double findLargestExpense();

#endif
