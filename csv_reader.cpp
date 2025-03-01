#include <iostream>
#include <fstream> // for file handling
#include <sstream> // for splitting strings
#include <vector>

using namespace std;

int main() {
    ifstream file("data.csv"); // Open the CSV file

	if (!file) { // Check if file was opened successfully
        cerr << "Error opening file!" << endl;
        return 1; // Return error code
    }

    string line;
    vector<vector<string>> data; // Store CSV data in a 2D vector

	while (getline(file, line)) { // Read data from file
        stringstream ss(line);
        vector<string> row;
        string cell;

        // Split line by commas
        while (getline(ss, cell, ',')) {
            row.push_back(cell);
        }

		data.push_back(row); // Add row to data
    }

    file.close(); // Close file

    // Print the data (for testing)
    cout << "CSV Data Loaded Successfully:\n";
    for (const auto& row : data) {
        for (const auto& cell : row) {
            cout << cell << "\t";
        }
        cout << endl;
    }

	return 0; // Return success code
}