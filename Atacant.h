//
// Created by Vlad Piele on 6/2/2024.
//

#ifndef OOP_ATACANT_H
#define OOP_ATACANT_H

#include <utility>

#include "Jucator.h"
#include "Exceptii.h"


class Atacant : public Jucator {
public:

    Atacant(std::string nume, int varsta, std::string pozitieJoc, int pace, int shooting, int passing, int dribbling, int defending, int physical, bool accidentat);

    [[nodiscard]] Jucator* clone() const override;

    Atacant(const Atacant& other) = default;

    Atacant& operator=(const Atacant& other) = default;

    void antrenamentJucator() override;

    void afiseazaDetalii() override;

    ~Atacant() override = default;
};


#endif //OOP_ATACANT_H
