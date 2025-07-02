#include "Coordinata.h"
#include <iostream>
using namespace std;

Coordinata::Coordinata(){}

Coordinata::Coordinata(float latitudine, float longitudine){
    if (latitudine > 90.0 || latitudine < -90.0 || longitudine > 180.0 || longitudine < -180.0){
        throw "Coordinata errata";
    }
    this->latitudine = latitudine;
    this->longitudine = longitudine;
}

float Coordinata::getLatitudine(){
    return latitudine;
}

float Coordinata::getLongitudine(){
    return longitudine;
}

void Coordinata::setLatitudine(float latitudine){
    if (latitudine > 90.0 || latitudine < -90.0 ){
        throw "Coordinata errata";
    }
    this->latitudine = latitudine;
}

void Coordinata::setLongitudine(float longitudine){
    if ( longitudine > 180.0 || longitudine < -180.0){
        throw "Coordinata errata";
    }
    this->longitudine = longitudine;
}

std::string Coordinata::toString(){
    //cout << "Latitudine: " << latitudine << ", longitudine: " << longitudine << endl;
    return  "Latitudine: " + to_string(latitudine) + ", longitudine: " + to_string(longitudine) ;
}