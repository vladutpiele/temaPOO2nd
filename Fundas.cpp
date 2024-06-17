//
// Created by Vlad Piele on 6/2/2024.
//


#include <valarray>
#include "Fundas.h"


Fundas::Fundas([[maybe_unused]] std::string nume, int varsta, [[maybe_unused]] std::string pozitieJoc, int pace, int shooting, int passing, int dribbling,
               int defending, int physical, bool accidentat) : Jucator(std::move(nume), varsta, std::move(pozitieJoc), pace, shooting, passing, dribbling, defending, physical, accidentat){}

Jucator *Fundas::clone() const {
    return new Fundas(*this);
}

void Fundas::antrenamentJucator() {
    defending += defending % 10 + physical % 7;
    physical += (int)(sqrt((int)sqrt(physical)));
}

void Fundas::afiseazaDetalii() {
    std::cout << "Fundasul " << Jucator::getNume() << " are defending : " << defending << " si physical : " << physical << '\n';
}