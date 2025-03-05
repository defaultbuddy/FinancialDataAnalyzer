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
