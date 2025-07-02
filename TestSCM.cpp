#include "Missione.h"
#include "Drone.h"
#include "DroneAttacco.h"
#include "MissioneMilitare.h"
#include "SCM.h"
#include <string>
#include <iostream>
using namespace std;

int main(){

    Scm scm =  Scm("SCM1");
    cout << "Scm con id: " << scm.getId() << endl;

    vector<Coordinata> coordinDaSeguire;
    coordinDaSeguire.push_back(Coordinata(50.0, 40.0));
    coordinDaSeguire.push_back(Coordinata(60.0, 80.0));

    Drone *drone = scm.registraDrone("AAA4", coordinDaSeguire, "Attacco");
    cout << drone->toString() << endl;

    vector<Coordinata> coordSeguite = {};
    vector<Coordinata> coordDaSeguire;
    coordDaSeguire.push_back(Coordinata(50.0, 30.0));
    coordDaSeguire.push_back(Coordinata(70.0, 80.0));

    Drone *droneAtt = new DroneAttacco("AAA1", coordSeguite, coordDaSeguire);

    vector<Drone*> droni;
    droni.push_back(droneAtt);

    time_t inizio;
    time(&inizio);
    Missione *missMilitare = new MissioneMilitare(inizio, 0, droni); // esempio con fine = 0 (NULL equivale a 0)

    cout << missMilitare->toString() << endl;

    scm.assegnaMissioneToDrone(missMilitare, drone);

    cout << "\nNUOVO ASSEGNAMENTO" << missMilitare->toString() << endl;

}