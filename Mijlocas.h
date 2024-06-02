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

    Mijlocas([[maybe_unused]] [[maybe_unused]] std::string nume, int varsta, [[maybe_unused]] [[maybe_unused]] std::string pozitieJoc, int pace, int shooting, int passing, int dribbling, int defending, int physical, bool accidentat);

    [[nodiscard]] Jucator* clone() const override;

    void antreneaza(int valoare) override;

    void afiseazaDetalii() override;
};

#endif //OOP_MIJLOCAS_H
