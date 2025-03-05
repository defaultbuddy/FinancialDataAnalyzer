#pragma once

#include <vector>
#include <string>

// Define the struct
struct Transaction {
    std::string date;
    double amount;
    std::string category;
};

// Define the class
class TransactionManager {
private:
    std::vector<Transaction> transactions;

public:
    void readCSV(const std::string& filename);
    double calculateNetBalance() const;
    double findLargestExpense() const;
    std::vector<Transaction> getTransactions() const;
};

// Declare the transactions vector (extern means it's defined elsewhere)

// Declare the function for reading CSV file
//void readCSV(const std::string& filename);

// Declare the function for calculating net balance
//double calculateNetBalance();

// Declare the function for finding the largest expense
//double findLargestExpense();
