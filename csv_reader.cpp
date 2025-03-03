#include "csv_reader.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

std::vector<Transaction> transactions;  // Vector to store all transactions

void readCSV(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file: " << filename << std::endl;
        exit(1);
    }

    std::string line;
    std::getline(file, line);  // Skip header row (Date,Amount,Category)

    while (std::getline(file, line)) {
		std::stringstream ss(line); // Convert line to stringstream
		std::string date, category, amountStr; // Variables to store data
        double amount;

        std::getline(ss, date, ',');      // Extract Date
        std::getline(ss, category, ',');  // Extract Category
        std::getline(ss, amountStr, ','); // Extract Amount (as string)

        amount = std::stod(amountStr);  // Convert Amount to double

        transactions.push_back({ date, category, amount });  // Store in vector
    }

    file.close();
}

double calculateNetProfit() {
	double total = 0.0;
	for (const auto& t : transactions) { // Read-only for loop to iterate over transactions
		total += t.amount;
	}
	return total;
}