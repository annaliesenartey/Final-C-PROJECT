////
//// Created by Annaliese Nartey on 11/26/2022.
////
#include <fstream>
#include <string>
#include <list>
#include <map>
#include <sstream>
#include <iostream>
using namespace std;

#include "Airlines.h"

Airlines::Airlines(int id, string name, string aka, string iata, string icao, string calsign, string country, string active) {
    this->airline_id = id;
    this->airline_name = name;
    this->alias = aka;
    this->airlineIata = iata;
    this->airlineIcao = icao;
    this->callsign = calsign;
    this->country = country;
    this->active = active;
}


void Airlines:: reader() {

    ifstream file;
    file.open("C:/Users/pc/OneDrive - Ashesi University/Second year/2nd Semester/Intermediate CP/c++/airlines.csv");
    string line = "";
    int count = 0;
    string key;
    if (file.is_open()) {
        while (getline(file, line)) {
            if (count == 0) {
                count++;
                continue;
            }
            string airline_name, alias, airlineIata, airlineIcao, callsign, temp, country, active;
            int airline_id;
            stringstream inputString(line);

            getline(inputString, temp, ',');
            airline_id = stoi(temp);
            getline(inputString, airline_name, ',');
            getline(inputString, alias, ',');
            getline(inputString, airlineIata, ',');
            getline(inputString, airlineIcao, ',');
            getline(inputString, callsign, ',');
            getline(inputString, country, ',');
            getline(inputString, active, ',');


            key = airlineIata;
            Airlines airline = *new Airlines(airline_id, airline_name, alias, airlineIata, airlineIcao, callsign, country, active);


            if (Airlines::Hmap.find(key) == Airlines::Hmap.end()){
                vector<Airlines> lists;
                lists.push_back(airline);
                Airlines::Hmap.insert({ key, lists });}

            else{
                Hmap[key].push_back(airline);
            }
        }
    }
    else {
        cout << "Sorry cannot open";
    }
}
