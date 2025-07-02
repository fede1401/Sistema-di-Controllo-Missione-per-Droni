#include "DroneAttacco.h"

DroneAttacco::DroneAttacco() : Drone() {}

DroneAttacco::DroneAttacco(std::string id, std::vector<Coordinata> seguite, std::vector<Coordinata> daSeguire)
    : Drone(id, seguite, daSeguire) {}

void DroneAttacco::preparaMissione() {
    std::cout << "DroneAttacco: preparazione sistema d’arma, controllo bersagli, armamento attivo.\n";
}

void DroneAttacco::prova(){
    std::cout << "Prova in DroneAttacco.cpp" << std::endl;
}