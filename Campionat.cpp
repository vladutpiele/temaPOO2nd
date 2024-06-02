//
// Created by Vlad Piele on 6/2/2024.
//

#include "Campionat.h"

int Campionat::nrEchipe = 0;
int Campionat::nrJucatori = 0;
std::vector<Echipa> Campionat::echipe;


Campionat::Campionat(const std::vector<Echipa>& _echipe)  {
    echipe = _echipe;
}


[[maybe_unused]] void Campionat::adaugaJucator() {
    nrJucatori++;
}

void Campionat::adaugaEchipa() {
    nrEchipe++;
}

int Campionat::numarEchipe() {
    return nrEchipe;
}

int Campionat::numarJucatori() {
    return nrJucatori;
}

bool Campionat::existaEchipa(const Echipa &echipa) {
    for(const auto& it : echipe) {
        if(it.getNume() == echipa.getNume()) {
            return true;
        }
    }
    return false;
}

void Campionat::joacaCampionat() {
    int maxim = 0, cnt = 0;
    std::string echipaCampioana;
    for(int i = 0; i < nrEchipe - 1; i ++) {
        for(int j = i + 1; j < nrEchipe; j ++){
            echipe[i].joacaMeci(echipe[j]);
        }
        if(echipe[i].getNrPuncte() > maxim) {
            maxim = echipe[i].getNrPuncte();
            echipaCampioana = echipe[i].getNume();
            cnt = 1;
        } else if(echipe[i].getNrPuncte() == maxim) {
            cnt++;
        }
    }
    if(cnt == 1){
        std::cout << "Echipa campioana este " << echipaCampioana << '\n';
    } else {
        throw EchipaCampioana("Nu se poate alege o campioana, avem egalitate de puncte");
    }
}
