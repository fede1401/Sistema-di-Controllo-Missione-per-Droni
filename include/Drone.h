#ifndef DRONE_H
#define DRONE_H

#include <string>
#include <list>
#include "Coordinata.h"
#include <vector>


class Drone{

    private:
        std::string id;
        std::vector<Coordinata> coordinateSeguite;
        std::vector<Coordinata> coordinateDaSeguire;

    public:
        Drone();

        Drone(std::string id, std::vector<Coordinata> coordinateSeguite, std::vector<Coordinata> coordinateDaSeguire);

        // Getter and Setter
        std::string getId();

        std::vector<Coordinata> getCoordinateSeguite();
        std::vector<Coordinata> getCoordinateDaSeguire();
        void setCoordinateSeguite( std::vector<Coordinata> coordinateSeguite); 
        void setCoordinateDaSeguire( std::vector<Coordinata> coordinateDaSeguire); 
        
        // Ohter methods
        void aggiungiCoordinataStorico(Coordinata coordinata);

        // Metodo virtuale puro
        virtual void preparaMissione() = 0;

        virtual void prova();

        void eseguiManovre();

        void comunicaMessaggioBase(std::string messaggio);
        
        std::string riceviAggiornamentiBase();

        //void utilizzaAttrezzatura();

        std::string toString();
};

#endif