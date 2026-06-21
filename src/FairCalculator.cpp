#include "../Include/FareCalculator.h"
#include <iostream>
#include <fstream>

using namespace std;

// Load fare slabs from fare.txt
void FareCalculator::loadFares(const string& filename)
{
    ifstream fin(filename);

    if (!fin)
    {
        cout << "Unable to open file " << filename << endl;
        return;
    }

    double low, high;
    int fare;

    while (fin >> low >> high >> fare)
    {
        FareCalculator::fareTable.push_back({{low, high}, fare});
    }

    fin.close();
}

// Calculate fare for a given distance
int FareCalculator::calculateFare(double distance)
{
    for (auto x : fareTable)
    {
        double low = x.first.first;
        double high = x.first.second;
        int fare = x.second;

        if (distance >= low && distance <= high)
        {
            return fare;
        }
    }

    return -1; // Invalid distance
}

// Display the complete fare chart
void FareCalculator::displayFareTable()
{
    cout << "\n===== KOLKATA METRO FARE TABLE =====\n";

    for (auto x : fareTable)
    {
        cout << x.first.first
             << " km - "
             << x.first.second
             << " km : ₹"
             << x.second
             << endl;
    }
}