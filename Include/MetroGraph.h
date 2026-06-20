#ifndef METROGRAPH_H
#define METROGRAPH_H

#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std;

class MetroGraph {

private:

    // Stores station names
    vector<string> stations;

    // Maps station name to index
    unordered_map<string, int> stationMap;

    // Adjacency List
    // pair<neighborIndex, distance>
    vector<vector<pair<int, double>>> graph;

public:

    // Constructor
    MetroGraph();

    // Load data
    void loadStations(string filename);
    void loadConnections(string filename);
    void loadFares(string filename);

    // Display Functions
    void displayAllStations();
    void displayMetroMap();

    // Search
    bool searchStation(string stationName);

    // Graph Algorithms
    void shortestDistance(string source, string destination);
    void minimumStations(string source, string destination);

    // Route Utilities
    void printRoute(vector<int>& parent, int destination);

    // Fare
    int calculateFare(double distance);

    // Information
    int totalStations();
    int totalConnections();
};

#endif