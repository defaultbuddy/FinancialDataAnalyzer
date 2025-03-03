#include <iostream>
#include "csv_reader.h"

int main() {
    readCSV("data.csv");  // Read CSV and store data

    // Print all stored transactions
    std::cout << "Stored Transactions:\n";
    for (const auto& t : transactions) {
        std::cout << "Date: " << t.date
            << ", Amount($): " << t.amount
            << ", Category: " << t.category << std::endl;
    }

	// Calculate and print total expenses
	double netProfit = calculateNetProfit();
	std::cout << "\nNet Profit: $" << netProfit << std::endl;

	// Find and print the largest expense
	double largestExpense = findLargestExpense();
    std::cout << "\nLargest Expense: $" << largestExpense << std::endl;

    return 0;
}

