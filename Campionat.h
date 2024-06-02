//
// Created by Vlad Piele on 6/2/2024.
//

#ifndef OOP_CAMPIONAT_H
#define OOP_CAMPIONAT_H

#include <utility>

#include "Echipa.h"

class Campionat {
private:
    static int nrEchipe;
    static int nrJucatori;
    static std::vector<Echipa> echipe;
public:

    explicit Campionat(const std::vector<Echipa>& _echipe);


    Campionat& operator=(const Campionat& other) = default;

    [[maybe_unused]] static void adaugaJucator();

    static void adaugaEchipa();

    static int numarEchipe();

    static int numarJucatori();

    static bool existaEchipa(const Echipa& echipa);

    static void joacaCampionat();

    ~Campionat() = default;

};

#endif //OOP_CAMPIONAT_H
