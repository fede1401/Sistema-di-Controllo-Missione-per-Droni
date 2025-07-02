#ifndef DRONEATTACCO_H
#define DRONEATTACCO_H

#include "Drone.h"
#include <iostream>

class DroneAttacco : public Drone {
public:
    // Costruttori ereditati se necessari
    DroneAttacco();
    DroneAttacco(std::string id, std::vector<Coordinata> seguite, std::vector<Coordinata> daSeguire);

    void preparaMissione() override;

    void prova() override;

};

#endif