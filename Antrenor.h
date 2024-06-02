//
// Created by Vlad Piele on 6/2/2024.
//

#ifndef OOP_ANTRENOR_H
#define OOP_ANTRENOR_H

#include <utility>
#include <vector>

#include "Jucator.h"

class Antrenor {
private:
    std::string nume;
    std::vector<Jucator*> jucatori;
public:

    [[maybe_unused]] Antrenor(std::string _nume, std::vector<Jucator*> _jucatori);

    Antrenor() = default;

    [[nodiscard]] virtual Antrenor* clone() const;

    Antrenor(const Antrenor& other);

    friend void swap(Antrenor& antrenor1, Antrenor& antrenor2);

    Antrenor& operator=(Antrenor other);

    ~Antrenor();
};

#endif //OOP_ANTRENOR_H
