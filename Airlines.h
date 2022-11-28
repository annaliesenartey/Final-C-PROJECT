////
//// Created by Annaliese Nartey on 11/26/2022.
////
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iostream>
using namespace std;

#ifndef UNTITLED2_AIRLINES_H
#define UNTITLED2_AIRLINES_H


#endif //UNTITLED2_AIRLINES_H


class Airlines {
private:
    int airline_id;
    string airline_name;
    string alias;
    string airlineIata;
    string airlineIcao;
    string callsign;
    string country;
    string active;
public:          // Access specifier
    Airlines(int id, string name, string aka, string iata, string icao, string calsign, string country, string active);
    static void reader();
    static map<string, vector<Airlines>> Hmap;
};
