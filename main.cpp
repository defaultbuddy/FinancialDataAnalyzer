#include <iostream>
#include "csv_reader.h"  // Include CSV reader

using namespace std;

int main() {
    string filename = "data.csv";
	vector<vector<string>> data = readCSV(filename); // Load CSV data

    // Print the CSV data
    cout << "CSV Data Loaded Successfully:\n";
    for (const auto& row : data) {
        for (const auto& cell : row) {
            cout << cell << "\t";
        }
        cout << endl;
    }

    return 0;
}
