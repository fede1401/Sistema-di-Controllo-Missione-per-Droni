#ifndef SCM_H
#define SCM_H

#include <string>
#include <vector>
#include "Coordinata.h"
#include "Missione.h"
#include "Drone.h"
#include "DroneAttacco.h"
#include "DroneSoccorso.h"


using namespace std;

class Scm{
    private:
        string id;

    public:
        Scm();

        Scm(string id);

        // Getter and Setter
        string getId();

        // Other Method
        Drone* registraDrone(string id,  vector<Coordinata> coordinateDaSeguire, string tipo);

        void assegnaMissioneToDrone(Missione *miss, Drone *dr);

        void simulaComportamentoDrone(Drone *dr);

        void stampaReporFineMissione(Missione *miss);

        vector<Drone> elencoDroniAttivi();

        vector<Missione> elencoMissioniCompletate();
};

#endif