//
// Created by Vlad Piele on 6/2/2024.
//

#ifndef OOP_FUNDAS_H
#define OOP_FUNDAS_H


#include <utility>

#include "Jucator.h"
#include "Exceptii.h"

class Fundas : public Jucator {
public:

    Fundas(std::string nume, int varsta, std::string pozitieJoc, int pace, int shooting, int passing, int dribbling, int defending, int physical, bool accidentat);

    [[nodiscard]] Jucator* clone() const override;

    void antreneaza() override;

    void afiseazaDetalii() override;

    ~Fundas() override = default;
};


#endif //OOP_FUNDAS_H
