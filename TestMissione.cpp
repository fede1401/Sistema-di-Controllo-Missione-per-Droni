#include "Missione.h"
#include "Drone.h"
#include "DroneAttacco.h"
#include "MissioneMilitare.h"
#include <string>
#include <iostream>
using namespace std;

int main(){

    vector<Coordinata> coordSeguite = {};
    vector<Coordinata> coordDaSeguire;
    coordDaSeguire.push_back(Coordinata(50.0, 30.0));
    coordDaSeguire.push_back(Coordinata(70.0, 80.0));

    Drone *droneAtt = new DroneAttacco("AAA1", coordSeguite, coordDaSeguire);
    Drone *droneAtt2 = new DroneAttacco("AAA2", coordSeguite, coordDaSeguire);
    Drone *droneAtt3 = new DroneAttacco("AAA3", coordSeguite, coordDaSeguire);

    vector<Drone*> droni;
    droni.push_back(droneAtt);
    droni.push_back(droneAtt2);

    time_t inizio;
    time(&inizio);
    Missione *missMilitare = new MissioneMilitare(inizio, 0, droni); // esempio con fine = 0 (NULL equivale a 0)

    //cout << missMilitare->getId() << endl;

    missMilitare->addDrone(droneAtt3);

    for(Drone *dr: missMilitare->getDroni()){
        dr->toString();
    }

    cout << missMilitare->toString() << endl;

    cout << missMilitare->report() <<endl;

}