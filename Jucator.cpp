//
// Created by Vlad Piele on 6/2/2024.
//

#include "Jucator.h"
#include "Campionat.h"

Jucator::Jucator(std::string _nume, int _varsta, std::string _pozitieJoc, int _pace, int _shooting, int _passing,
                 int _dribbling, int _defending, int _physical, bool _accidentat) : nume(std::move(_nume)), varsta(_varsta), pozitieJoc(std::move(_pozitieJoc)),
                                                                                    pace(_pace), shooting(_shooting), passing(_passing), dribbling(_dribbling), defending(_defending), physical(_physical), accidentat(_accidentat) {
    Campionat::adaugaJucator();
}

void Jucator::afiseazaDetalii() {
    std::cout << "varsta jucatorului este de " << varsta << " ani" << '\n';
    std::cout << "pace : " << pace << '\n';
    std::cout << "shooting : " << shooting << '\n';
    std::cout << "passing : " << passing << '\n';
    std::cout << "dribbling : " << dribbling << '\n';
    std::cout << "defending : " << defending << '\n';
    std::cout << "physical : " << physical << '\n';
}

void Jucator::seAccidenteaza() {
    accidentat = true;
}

int Jucator::totalRating() const {
    if(!accidentat)
        return pace + shooting + passing + dribbling + defending + physical;
    return 0;
}

void Jucator::revineDupaAccidentare() {
    accidentat = false;
}

void Jucator::antreneaza() {}

Jucator *Jucator::clone() const {
    return new Jucator(*this);
}

std::string Jucator::getNume() const {
    return nume;
}