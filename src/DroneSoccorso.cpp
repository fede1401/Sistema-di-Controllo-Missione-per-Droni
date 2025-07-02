#include "DroneSoccorso.h"
#include <iostream>

DroneSoccorso::DroneSoccorso(): Drone(){}

DroneSoccorso::DroneSoccorso(std::string id, std::vector<Coordinata> seguite, std::vector<Coordinata> daSeguire): 
    Drone(id, seguite, daSeguire){}

void DroneSoccorso::preparaMissione() {
    std::cout << "DroneSoccorso: preparazione sistema di soccorso, controllo entità in necessità di soccorso, drone attivo.\n";
}

void DroneSoccorso::prova(){
    std::cout << "Prova in DroneSoccorso.cpp" << std::endl;
}