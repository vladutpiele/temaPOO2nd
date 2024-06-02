//
// Created by Vlad Piele on 6/2/2024.
//

#ifndef OOP_PORTAR_H
#define OOP_PORTAR_H


#include "Jucator.h"


class Portar : public Jucator {
private:
    int ratingReflex;
    int ratingDegajare;
public:

    Portar([[maybe_unused]] std::string nume, int varsta, [[maybe_unused]] std::string pozitieJoc, int pace, int shooting, int passing, int dribbling, int defending, int physical, bool accidentat, int _ratingReflex, int _ratingDegajare);

    [[nodiscard]] Jucator* clone() const override;

    void antreneaza() override;

    void afiseazaDetalii() override;
};

#endif //OOP_PORTAR_H
