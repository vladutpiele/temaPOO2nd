//
// Created by Vlad Piele on 6/2/2024.
//

#include "Portar.h"

#include <utility>
#include "Exceptii.h"
#include "Jucator.h"

Portar::Portar([[maybe_unused]] std::string nume, int varsta, [[maybe_unused]] std::string pozitieJoc, int pace, int shooting, int passing, int dribbling,
               int defending, int physical, bool accidentat, int _ratingReflex, int _ratingDegajare) : Jucator(std::move(nume), varsta, std::move(pozitieJoc), pace, shooting, passing, dribbling, defending, physical, accidentat){
    ratingReflex = _ratingReflex;
    ratingDegajare = _ratingDegajare;
}

Jucator *Portar::clone() const {
    return new Portar(*this);
}

void Portar::antreneaza() {
    if(accidentat) {
        throw AntrenamentIndisponibil("Jucatorul nu poate fi antrenat pentru ca este accidentat");
    }
    ratingDegajare ++;
    ratingReflex ++;
}

void Portar::afiseazaDetalii() {
    std::cout << "Portarul " << Jucator::getNume() << " are rating degajare : " << ratingDegajare << " si rating reflex : " << ratingReflex << '\n';
}