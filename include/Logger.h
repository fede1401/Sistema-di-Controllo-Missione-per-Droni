#include <string>
#include <iostream>
using namespace std;

class Logger{

    public:
        Logger();

        void logInfo(string message);

        void logError(string messageError);

        void logDebug(string messageDebug);
};