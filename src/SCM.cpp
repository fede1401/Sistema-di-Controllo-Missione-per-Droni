#include "SCM.h"
using namespace std;


Scm::Scm(){}

Scm::Scm(string id){ this-> id = id;}

string Scm::getId(){ 
    return id;
}

Drone* Scm::registraDrone(string id,  vector<Coordinata> coordinateDaSeguire, string tipo){
    vector<Coordinata> coordinateSeguite = {};
    Drone *drone;

    if (tipo=="Attacco"){ 
        drone = new DroneAttacco(id, coordinateDaSeguire, coordinateSeguite);  
    }
    else if (tipo == "Soccorso"){
        drone = new DroneSoccorso(id, coordinateDaSeguire, coordinateSeguite);  
    }
    return drone;
}

void Scm::assegnaMissioneToDrone(Missione *miss, Drone *dr){
    miss->addDrone(dr);
}


void Scm::simulaComportamentoDrone(Drone *dr){
    dr->eseguiManovre();
}

void Scm::stampaReporFineMissione(Missione *miss){
    miss->report();
}

vector<Drone> Scm::elencoDroniAttivi(){
    
}

vector<Missione> Scm::elencoMissioniCompletate(){
    
}