#ifndef COORDINATA_H
#define COORDINATA_H

#include <string>

class Coordinata{
    private:
        float latitudine;
        float longitudine;

    public:
        Coordinata();

        Coordinata(float latitudine, float longitudine);

        // Getter and Setter
        float getLatitudine();
        void setLatitudine(float latitudine);

        float getLongitudine();
        void setLongitudine(float longitudine);

        std::string toString();
};

#endif