#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

// Function to read CSV and return data as a 2D vector
vector<vector<string>> readCSV(const string& filename) {
    ifstream file(filename);
    vector<vector<string>> data;

    if (!file) {
        cerr << "Error opening file: " << filename << endl;
        exit(1); // Exit program with error code 1
    }

    string line;
	while (getline(file, line)) { // Iterate through file line by line
		stringstream ss(line); // Convert line to stringstream
        vector<string> row;
        string cell;

		while (getline(ss, cell, ',')) { // Iterate through line by comma separated cell
			row.push_back(cell); // Add current cell to row
        }
		data.push_back(row); // Add current row to data
    }

	file.close(); // Close file
    return data;
}