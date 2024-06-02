//
// Created by Vlad Piele on 6/2/2024.
//

#ifndef OOP_EXCEPTII_H
#define OOP_EXCEPTII_H

#include <iostream>
#include <exception>

class EroareAplicatie : public std::runtime_error {
public:
    explicit EroareAplicatie(const std::string& message);
};

class AntrenamentIndisponibil : public EroareAplicatie {
public:
    explicit AntrenamentIndisponibil(const std::string& message);
};

class MeciIndisponibil : public EroareAplicatie {
public:
    explicit MeciIndisponibil(const std::string& message);
};

class EchipaCampioana : public EroareAplicatie {
public:
    explicit EchipaCampioana(const std::string& message);
};

#endif //OOP_EXCEPTII_H
