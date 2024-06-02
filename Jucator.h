//
// Created by Vlad Piele on 6/2/2024.
//

#ifndef OOP_JUCATOR_H
#define OOP_JUCATOR_H


#include <string>
#include <utility>

class Jucator {
private:
    std::string nume;
    [[maybe_unused]] int varsta;
    [[maybe_unused]] std::string pozitieJoc;
protected:
    int pace, shooting, passing, dribbling, defending, physical;
    bool accidentat;
public:

    Jucator(std::string _nume, int _varsta, std::string _pozitieJoc, int _pace, int _shooting, int _passing, int _dribbling, int _defending, int _physical, bool _accidentat);

    Jucator(const Jucator& other) = default;

    Jucator& operator=(const Jucator& other) = default;

    [[nodiscard]] std::string getNume() const;

    [[nodiscard]] virtual Jucator* clone() const;

    [[maybe_unused]] virtual void antreneaza();

    virtual void afiseazaDetalii();

    void seAccidenteaza();

    void revineDupaAccidentare();

    [[nodiscard]] int totalRating() const;

    virtual ~Jucator()= default;
};


#endif //OOP_JUCATOR_H
