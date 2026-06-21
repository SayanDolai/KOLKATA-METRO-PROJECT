#include "../Include/station.h" 
#include<fstream>
#include<string>

using namespace std ;

MetroStation::MetroStation(){
    id = 0 ;
    name = "" ;
    line = "" ;
}

MetroStation::MetroStation(int id, string name, string line){
    this->id = id ;
    this->name = name ;
    this->line = line ;
}

