#ifndef MISSIONE_H
#define MISSIONE_H

#include <string>
#include <ctime>
#include <vector>
#include "Drone.h"
#include <sstream>
#include <fstream>
#include <iostream>



class Missione{

    private:
        std::string id;
        time_t inizio;
        time_t fine;
        std::vector<Drone*> droni;

    public:
        Missione();

        Missione(time_t inizio, time_t fine, std::vector<Drone*> droni);

        // Getter and Setter
        std::string getId();
        std::string getNextId();

        time_t getInizio();
        time_t getFine();
        void setInizio(time_t inizio);
        void setFine(time_t fine);

        void setDroni(std::vector<Drone*> droni);
        std::vector<Drone*> getDroni();

        void addDrone(Drone *dr);

        virtual std::string report() = 0;

        std::string toString();

        
};

#endif