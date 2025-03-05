#include <iostream>
#include "transaction.h"

int main() {
	TransactionManager manager;  // Create an instance of TransactionManager

    manager.readCSV("large_transactions_with_negatives.csv");  // Read CSV and store data

	// Sort transactions by date
	manager.sortTransactionsByDate();

    // Print all stored transactions
    std::cout << "Sorted Transactions by Date:\n";
    for (const auto& t : manager.getTransactions()) {
        std::cout << "Date: " << t.date
            << ", Amount($): " << t.amount
            << ", Category: " << t.category << std::endl;
    }

	// Calculate and print net balance
	double netBalance = manager.calculateNetBalance();
	std::cout << "\nNet Balance: $" << netBalance << std::endl;

	// Find and print the largest expense
	double largestExpense = manager.findLargestExpense();
    std::cout << "\nLargest Expense: $" << largestExpense << std::endl;

    return 0;
}

