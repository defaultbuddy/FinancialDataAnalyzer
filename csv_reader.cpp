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
    while (getline(file, line)) {
        stringstream ss(line);
        vector<string> row;
        string cell;

        while (getline(ss, cell, ',')) {
            row.push_back(cell);
        }
        data.push_back(row);
    }

    file.close();
    return data;
}