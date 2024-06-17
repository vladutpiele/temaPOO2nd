//
// Created by Vlad Piele on 6/2/2024.
//

#include <valarray>
#include "Mijlocas.h"

Mijlocas::Mijlocas([[maybe_unused]] std::string nume, int varsta, [[maybe_unused]] std::string pozitieJoc, int pace, int shooting, int passing,
                   int dribbling, int defending, int physical, bool accidentat) : Jucator(std::move(nume), varsta, std::move(pozitieJoc), pace, shooting, passing, dribbling, defending, physical, accidentat){}

Jucator *Mijlocas::clone() const {
    return new Mijlocas(*this);
}

void Mijlocas::antrenamentJucator() {
    pace += ((int)sqrt(100) - pace);
    defending += (int)sqrt((int)(sqrt(defending)));
    passing += rand() % 10;
}

void Mijlocas::afiseazaDetalii() {
    std::cout << "Mijlocasul " << Jucator::getNume() << " are passing : " << passing << ", defending : " << defending << " si dribbling : " << dribbling << '\n';
}