#include "Logger.h"

Logger::Logger(){}

void Logger::logInfo(string message){
    cout << "[INFO] " << message << endl;
}

void Logger::logError(string messageError){
    cout << "[ERROR] " << messageError << endl;
}

void Logger::logDebug(string messageDebug){
    cout << "[DEBUG] " << messageDebug << endl;
}