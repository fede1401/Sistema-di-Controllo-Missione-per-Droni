#include "Drone.h"
#include "DroneSoccorso.h"
#include "DroneAttacco.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){
    //Coordinata coordDaSeguire = Coordinata(50.0, 30.0);

    vector<Coordinata> coordSeguite = {};
    vector<Coordinata> coordDaSeguire;
    coordDaSeguire.push_back(Coordinata(50.0, 30.0));
    coordDaSeguire.push_back(Coordinata(70.0, 80.0));

    Drone *droneAtt = new DroneAttacco("AAA1", coordSeguite, coordDaSeguire);
    droneAtt->toString();

    droneAtt->aggiungiCoordinataStorico(Coordinata(80.0, 100.0));

    droneAtt->toString();

    droneAtt->preparaMissione();
    droneAtt->eseguiManovre();

    droneAtt->toString();

    string coordSeguiteStr = "Coordinate Seguite: \n";
    for (Coordinata &c : droneAtt->getCoordinateSeguite()) {
        coordSeguiteStr += "\t";
        coordSeguiteStr += c.toString();
        coordSeguiteStr += "\n";
    }
    cout << "MESSAGGIO DA INVIARE\n" << coordSeguiteStr << endl;

    droneAtt->comunicaMessaggioBase(coordSeguiteStr);

    cout << "MESSAGGIO INVIATO" << endl;

    string aggiornamenti = droneAtt->riceviAggiornamentiBase();
}