#include "Drone.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <stdexcept>
using namespace std;

Drone::Drone(){}

Drone::Drone(std::string id, std::vector<Coordinata> coordinateSeguite, std::vector<Coordinata> coordinateDaSeguire){
    this->id = id;
    this->coordinateSeguite = coordinateSeguite;
    this->coordinateDaSeguire = coordinateDaSeguire;
}

std::string Drone::getId() { return this-> id; }

std::vector<Coordinata> Drone::getCoordinateSeguite(){
    return this->coordinateSeguite;
}

std::vector<Coordinata> Drone::getCoordinateDaSeguire(){
    return this->coordinateDaSeguire;
}


void Drone::setCoordinateSeguite( std::vector<Coordinata> coordinateSeguite){
    this->coordinateSeguite = coordinateSeguite;
}

void Drone::setCoordinateDaSeguire( std::vector<Coordinata> coordinateDaSeguire){
    this->coordinateDaSeguire = coordinateDaSeguire;
}

void Drone::aggiungiCoordinataStorico(Coordinata coordinata){
    this->coordinateDaSeguire.push_back(coordinata);
}


void Drone::eseguiManovre(){
    for(Coordinata coo: this->coordinateDaSeguire){
        coordinateSeguite.push_back(coo);
        coordinateDaSeguire.erase(coordinateDaSeguire.begin());
    }
}

void Drone::comunicaMessaggioBase(std::string messaggio) {
    try {
        std::ofstream MyFile;
        MyFile.exceptions(std::ofstream::failbit | std::ofstream::badbit); // Attiva eccezioni
        MyFile.open("../data/DroneToBase.txt", std::ios::app);

        time_t timestamp;
        time(&timestamp);
        MyFile << "\n" << ctime(&timestamp) << " " << messaggio;
        MyFile.close();

        std::cout << "Messaggio scritto correttamente.\n";
    }
    catch (const std::exception& e) {
        std::cerr << "Errore nella scrittura del file: " << e.what() << '\n';
    }
}

std::string Drone::riceviAggiornamentiBase(){
    std::string aggiornamenti;
    
    // Read from the text file
    std::ifstream MyReadFile("../data/BaseToDrone.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, aggiornamenti)) {
        // Output the text from the file
        std::cout << aggiornamenti;
    }

    // Close the file
    MyReadFile.close();

    return aggiornamenti;
}


std::string Drone::toString() {
    std::string result;

    std::cout << "Drone con id: " << getId() << "\n" << std::endl;
    result = "Drone con id: " + getId();

    std::cout << "Coordinate seguite: " << endl;
    for (Coordinata &c : getCoordinateSeguite()) {
        result += c.toString();
        c.toString(); // supponendo che Coordinata abbia un metodo toString()
        result += "\n";
    }

    cout << endl;
    cout << endl;

    std::cout << "Coordinate da seguire: " << endl;
    for (Coordinata &c : getCoordinateDaSeguire()) {
        result += c.toString();
        c.toString(); // supponendo che Coordinata abbia un metodo toString()
        result += "\n";
    }

    cout << endl;
    cout << endl;
    return result;
}

void Drone::prova(){
    cout << "Prova in Drone.cpp" << endl;
}