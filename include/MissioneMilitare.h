#ifndef MISSIONEMILITARE_H
#define MISSIONEMILITARE_H

#include "Missione.h"

class MissioneMilitare : public Missione {
    public:
        MissioneMilitare();
        MissioneMilitare(time_t inizio, time_t fine, std::vector<Drone*> droni);

        std::string report() override;
};

#endif