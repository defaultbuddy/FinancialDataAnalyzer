#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    ifstream file("data.csv"); // Open the CSV file

    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1; // Return error code
    }

    string line;
    vector<vector<string>> data; // Store CSV data in a 2D vector

    while (getline(file, line)) {
        stringstream ss(line);
        vector<string> row;
        string cell;

        // Split line by commas
        while (getline(ss, cell, ',')) {
            row.push_back(cell);
        }

        data.push_back(row);
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

    return 0;
}