//
// Created by Vlad Piele on 6/2/2024.
//

#ifndef OOP_ECHIPA_H
#define OOP_ECHIPA_H


#include <utility>

#include "Antrenor.h"
#include "Jucator.h"
#include "Exceptii.h"

class Echipa {
private:
    std::string nume;
    int puncte;
    Antrenor antrenor;
    std::vector<Jucator*> jucatori;
public:

    Echipa(std::string _nume, int _puncte, const Antrenor& _antrenor, std::vector<Jucator*> _jucatori);

    virtual Echipa* clone();

    Echipa(const Echipa& other);

    friend void swap(Echipa& echipa1, Echipa& echipa2);

    Echipa& operator=(Echipa other);

    [[nodiscard]] std::string getNume() const;


    [[nodiscard]] int getNrPuncte() const;

    int totalValoareEchipa();

    void joacaMeci(Echipa other);

    ~Echipa();
};

#endif //OOP_ECHIPA_H
