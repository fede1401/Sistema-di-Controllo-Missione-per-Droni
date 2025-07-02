#include "Coordinata.h"
#include "Logger.h"
#include <iostream>

int main() {
    Logger logger = Logger();
    try {
        Coordinata coord = Coordinata(50.0, 30.0);
        coord.toString();

        Coordinata coord2;
        coord2.setLatitudine(30.0);
        coord2.setLongitudine(20.0);
        coord2.toString();

        // Questo genererà un'eccezione
        Coordinata coord3 = Coordinata(95.0, 230.0);
        coord3.toString();

        // Questo genererà un'eccezione
        Coordinata coord4;
        coord4.setLatitudine(95.0);
        coord4.setLongitudine(220.0);
        coord4.toString();


    } catch (const char* msg) {
        logger.logError(msg);
        std::cerr << "Eccezione catturata: " << msg << std::endl;
    }

    return 0;
}