//
// Created by Vlad Piele on 6/2/2024.
//

#include "Exceptii.h"

EroareAplicatie::EroareAplicatie(const std::string &message) : runtime_error(message) {}

AntrenamentIndisponibil::AntrenamentIndisponibil(const std::string &message) : EroareAplicatie(message) {}

MeciIndisponibil::MeciIndisponibil(const std::string &message) : EroareAplicatie(message) {}

EchipaCampioana::EchipaCampioana(const std::string &message) : EroareAplicatie(message) {}
