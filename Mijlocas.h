//
// Created by Vlad Piele on 6/2/2024.
//

#ifndef OOP_MIJLOCAS_H
#define OOP_MIJLOCAS_H


#include <utility>

#include "Jucator.h"
#include "Exceptii.h"


class Mijlocas : public Jucator {
public:

    Mijlocas(std::string nume, int varsta, std::string pozitieJoc, int pace, int shooting, int passing, int dribbling, int defending, int physical, bool accidentat);

    [[nodiscard]] Jucator* clone() const override;

    void antreneaza() override;

    void afiseazaDetalii() override;

    ~Mijlocas() override = default;
};

#endif //OOP_MIJLOCAS_H
