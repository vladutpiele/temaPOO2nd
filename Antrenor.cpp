//
// Created by Vlad Piele on 6/2/2024.
//

#include "Antrenor.h"
#include <vector>

Antrenor::Antrenor(std::string _nume, std::vector<Jucator *> _jucatori) : nume(std::move(_nume)), jucatori(std::move(_jucatori)) {}

Antrenor *Antrenor::clone() const {
    return new Antrenor(*this);
}

Antrenor::Antrenor(const Antrenor &other) {
    nume = other.nume;
    for(auto it : other.jucatori){
        jucatori.push_back(it->clone());
    }
}

void swap(Antrenor &antrenor1, Antrenor &antrenor2) {
    swap(antrenor1.nume, antrenor2.nume);
    swap(antrenor1.jucatori, antrenor2.jucatori);
}

Antrenor &Antrenor::operator=(Antrenor other) {
    swap(*this, other);
    return *this;
}

Antrenor::~Antrenor() {
    for(auto it : jucatori){
        delete it;
    }
}