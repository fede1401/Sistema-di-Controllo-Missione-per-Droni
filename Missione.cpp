#include "Missione.h"


Missione::Missione(){}

Missione::Missione(time_t inizio, time_t fine, std::vector<Drone*> droni){
    this->id = getNextId();
    //std::cout << "[DEBUG] ID assegnato alla missione: " << id << std::endl;
    this->inizio = inizio;
    this->fine = fine;
    this->droni = droni;
}

std::string Missione::getId(){
    return this->id;
}

std::string Missione::getNextId(){
    std::string nextId;

    // Read from the text file
    std::ifstream MyReadFile("../data/sequence.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, nextId)) {
        // Output the text from the file
        std::cout << nextId;
    }

    int nextIdInt = stoi(nextId);
    int nextIdNext = nextIdInt+1;
    // Close the file
    MyReadFile.close();
    
    // Next operations: save the next id
    std::ofstream MyFile;
    MyFile.open("../data/sequence.txt");
    MyFile << nextIdNext;
    MyFile.close();
    
    return std::to_string(nextIdInt);
}


time_t Missione::getInizio(){
    return this->inizio;
}
time_t Missione::getFine(){
    return this->fine;
}

void Missione::setInizio(time_t inizio){
    this->inizio = inizio;
}

void Missione::setFine(time_t fine){
    this->fine = fine;
}

void Missione::setDroni(std::vector<Drone*> droni){
    this->droni = droni;
}

std::vector<Drone*> Missione::getDroni(){
    return this->droni;
}

void Missione::addDrone(Drone *dr){
    droni.push_back(dr);
}

std::string Missione::toString(){

    std::string idS = getId();

    std::string is = ctime(&inizio); // inizio leggibile
    std::string fs = fine != 0 ? ctime(&fine) : "non definito";

    std::string droniS;
    for(Drone *dr: this->getDroni()){
        droniS += dr->toString();
        droniS += "\n";
    }

    return "Missione con id " + idS + ", inizio in: " + is + ", fine in : " + fs + "\nDroni : " + droniS;
}


