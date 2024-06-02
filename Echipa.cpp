//
// Created by Vlad Piele on 6/2/2024.
//



#include "Echipa.h"
#include "Campionat.h"

Echipa::Echipa(std::string _nume, int _puncte, const Antrenor &_antrenor, std::vector<Jucator *> _jucatori) : nume(std::move(_nume)), puncte(_puncte), antrenor(_antrenor), jucatori(std::move(_jucatori)) {
    Campionat::adaugaEchipa();
}

Echipa *Echipa::clone() {
    return new Echipa(*this);
}

Echipa::Echipa(const Echipa &other) {
    nume = other.nume;
    puncte = other.puncte;
    antrenor = other.antrenor;
    for(auto it : other.jucatori){
        jucatori.push_back(it->clone());
    }
}

void swap(Echipa& echipa1, Echipa& echipa2) {
    swap(echipa1.nume, echipa2.nume);
    swap(echipa1.antrenor, echipa2.antrenor);
    swap(echipa1.jucatori, echipa2.jucatori);
}

Echipa &Echipa::operator=(Echipa other) {
    swap(*this, other);
    return *this;
}

std::string Echipa::getNume() const {
    return nume;
}

int Echipa::getNrPuncte() const {
    return puncte;
}

int Echipa::totalValoareEchipa() {
    int val = 0;
    for(auto it : jucatori) {
        val += it->totalRating();
    }
    return val;
}

void Echipa::joacaMeci(Echipa other) {

    if(!Campionat::existaEchipa(other)) {
        throw MeciIndisponibil("Meciul nu se poate juca pentru ca echipa " + other.getNume() + " nu exita in campionat");
    }
    if(totalValoareEchipa() > other.totalValoareEchipa()){
        puncte += 3;
    } else if (totalValoareEchipa() == other.totalValoareEchipa()){
        puncte ++;
        other.puncte++;
    } else {
        other.puncte += 3;
    }

}

Echipa::~Echipa() {
    for(auto it : jucatori) {
        delete it;
    }
}