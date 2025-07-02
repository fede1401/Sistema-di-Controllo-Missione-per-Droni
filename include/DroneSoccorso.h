#ifndef DRONESOCCORSO_H
#define DRONESOCCORSO_H

#include "Drone.h"

class DroneSoccorso: public Drone{

    public:
        DroneSoccorso();
        DroneSoccorso(std::string id, std::vector<Coordinata> seguite, std::vector<Coordinata> daSeguire);

        void preparaMissione() override;

        void prova() override;
};

#endif