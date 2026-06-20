
#ifndef STATION_H
#define STATION_H

#include <string>
using namespace std;

class MetroStation {
public:
    int id;
    string name;
    string line;

    MetroStation();
    MetroStation(int id, string name, string line);
};

#endif