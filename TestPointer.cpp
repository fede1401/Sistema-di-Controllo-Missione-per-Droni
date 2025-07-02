#include "Drone.h"
#include "DroneAttacco.h"
#include "DroneSoccorso.h"
#include <vector>
using namespace std;

int main(){
    //Drone *drone = new DroneAttacco("1", {}, {});


    //DroneSoccorso drone2("2", {}, {});

    //drone->prova();

    //drone2.prova();

    // Why use POLIMORFISMO
    vector<Drone*> droni;

    Drone *drone = new DroneAttacco("1", {}, {});
    std::cout << "Indirizzo di memoria del puntatore: " << drone << std::endl;

    Drone *drone2 = new DroneSoccorso("2", {}, {});
    Drone *drone3 = new DroneAttacco("3", {}, {});
    DroneSoccorso drone4("4", {}, {});

    droni.push_back(drone);
    droni.push_back(drone2);
    droni.push_back(drone3);
    droni.push_back(&drone4);

}