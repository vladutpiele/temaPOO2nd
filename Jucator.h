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
    int varsta;
    std::string pozitieJoc;
    virtual void antrenamentJucator();
protected:
    int pace, shooting, passing, dribbling, defending, physical;
    bool accidentat;
public:

    Jucator(std::string _nume, int _varsta, std::string _pozitieJoc, int _pace, int _shooting, int _passing, int _dribbling, int _defending, int _physical, bool _accidentat);

    Jucator(const Jucator& other) = default;

    Jucator& operator=(const Jucator& other) = default;

    [[nodiscard]] std::string getNume() const;

    [[nodiscard]] virtual Jucator* clone() const;

    void antreneaza();

    virtual void afiseazaDetalii();

    [[maybe_unused]] void seAccidenteaza();

    [[maybe_unused]] void revineDupaAccidentare();

    [[nodiscard]] int totalRating() const;

    virtual ~Jucator()= default;
};


#endif //OOP_JUCATOR_H
