// calculate fare on the basis of distance 
// on the basis of distance 
#ifndef FARECALCULATOR_H
#define FARECALCULATOR_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class FareCalculator {

private:

    // Stores fare slabs
    // {minimum_distance, maximum_distance, fare}
    vector<pair<pair<double,double>,int>> fareTable;

public:

    // Load fare data from fares.txt
    void loadFares(const string& filename);

    // Return fare for a given distance
    int calculateFare(double distance);

    // Display all fare slabs for user friendly purpose and also maintain the transparency
    void displayFareTable();
};

#endif