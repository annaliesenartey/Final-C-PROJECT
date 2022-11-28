///
/// Created by Annaliese Nartey on 11/26/2022.

#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iostream>
using namespace std;

#ifndef UNTITLED2_AIRPORTS_H
#define UNTITLED2_AIRPORTS_H


class Airports {
public:
    string airport_id;
    string name;
    string city;
    string country;
    string iata_code;
    string icao_code;
//    string cod;
//    string stops;
//    string equipment;
    Airports(string airport_id, string name, string city, \
           string country, string iata_code, string icao_code);
    static void reader();
    static map<string, vector<Airports>> Hmap;

};


#endif //UNTITLED2_AIRPORTS_H
