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

#ifndef UNTITLED2_ROUTES_H
#define UNTITLED2_ROUTES_H


class Routes {
public:
    string airline;
    string airline_id;
    string source_airport;
    string sourceAir_id;
    string destinAir;
    string destinAir_id;
    string stops;

    Routes(string airline, string airline_id, string source_airport, \
           string sourceair_id, string destin, string destin_id,  string stops);
    static void reader();
    static map<string, vector<Routes>> Hmap;
    static map<string, Routes> Amap;


};


#endif //UNTITLED2_ROUTES_H
