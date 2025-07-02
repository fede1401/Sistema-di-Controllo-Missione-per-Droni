#include "MissioneCivile.h"
#include <string>
#include <iostream>

MissioneCivile::MissioneCivile(): Missione(){}
MissioneCivile::MissioneCivile(time_t inizio, time_t fine, std::vector<Drone*> droni) : Missione(inizio, fine, droni) {}

std::string MissioneCivile::report(){
    time_t inizio = getInizio();
    time_t fine = getFine();
    std::string is = ctime(&inizio); // inizio leggibile
    std::string fs = fine != 0 ? ctime(&fine) : "non definito";
    
    std::string result = "Missione con id: " + getId()
                        + ", iniziata il: " + is
                        + ", con fine: " + fs
                        + ", ha i seguenti droni: ...";
    return result;
}
