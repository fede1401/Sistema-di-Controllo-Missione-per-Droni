#ifndef MISSIONECIVILE_H
#define MISSIONECIVILE_H

#include "Missione.h"

class MissioneCivile : public Missione {
    public:
        MissioneCivile();
        MissioneCivile(time_t inizio, time_t fine, std::vector<Drone*> droni);

        std::string report() override;
};

#endif