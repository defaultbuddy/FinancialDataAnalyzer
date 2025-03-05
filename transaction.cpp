#include "transaction.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

void TransactionManager::readCSV(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file: " << filename << std::endl;
        exit(1);
    }

    std::string line;
    std::getline(file, line);  // Skip header row (Date,Amount,Category)

    while (std::getline(file, line)) {
		std::stringstream ss(line); // Convert line to stringstream
		std::string date, amountStr, category; // Variables to store data
        double amount;

        std::getline(ss, date, ',');      // Extract Date
        std::getline(ss, amountStr, ','); // Extract Amount (as string)
        std::getline(ss, category, ',');  // Extract Category

        amount = std::stod(amountStr);  // Convert Amount to double

        transactions.push_back({ date, amount, category });  // Store in vector
    }

    file.close();
}

double TransactionManager::calculateNetBalance() const {
	double total = 0.0;
	for (const auto& t : transactions) { // Read-only for loop to iterate over transactions
		total += t.amount;
	}
	return total;
}

double TransactionManager::findLargestExpense() const {
	double largestExpense = 0.0;
    for (const auto& t : transactions) {
        if (t.amount < 0 && t.amount < largestExpense) {
            largestExpense = t.amount;
        }
    }
	largestExpense *= -1; // Convert to positive value

    return largestExpense;
}

std::vector<Transaction> TransactionManager::getTransactions() const {
    return transactions;
}
