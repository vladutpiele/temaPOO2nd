//
// Created by Vlad Piele on 6/2/2024.
//

#include <valarray>
#include "Atacant.h"

Atacant::Atacant([[maybe_unused]] std::string nume, int varsta, [[maybe_unused]] std::string pozitieJoc, int pace, int shooting, int passing,
                 int dribbling, int defending, int physical, bool accidentat) : Jucator(std::move(nume), varsta, std::move(pozitieJoc), pace, shooting, passing, dribbling, defending, physical, accidentat){}

Jucator *Atacant::clone() const {
    return new Atacant(*this);
}

void Atacant::antrenamentJucator() {
    shooting += 1 + (shooting % 2) * (shooting % 3);
    dribbling += 2 + sqrt(20 - dribbling % 10);
}

void Atacant::afiseazaDetalii() {
    std::cout << "Atacantul " << Jucator::getNume() << " are shooting : " << shooting << " si dribbling : " << dribbling << '\n';
}
