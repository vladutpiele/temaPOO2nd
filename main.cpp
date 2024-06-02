#include <iostream>
#include <vector>
#include "Exceptii.h"
#include "Jucator.h"
#include "Portar.h"
#include "Fundas.h"
#include "Mijlocas.h"
#include "Atacant.h"
#include "Antrenor.h"
#include "Echipa.h"
#include "Campionat.h"


int getRandVal(){
    return 70 + rand() % 30;
}

int main(){
    try {
        std::vector<Echipa> echipe;
        for(int i = 0; i < 10; i ++) {
            /// voi crea 10 echipe in campionat
            Jucator* portar1 = new Portar("Portar1", 27, "portar", 30, 40, 22, 38, 55, 80, false, 97, 95);
            portar1->antreneaza(1);
            portar1->seAccidenteaza();
            portar1->antreneaza(2);
            Jucator* portar2 = new Portar("Portar2", 25, "portar", 36, 33, 29, 48, 45, 77, false, 91, 96);
            Jucator* fundas1 = new Fundas("Fundas1", 33, "fundas", getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), false);
            Jucator* fundas2 = new Fundas("Fundas2", 22, "fundas", getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), false);
            fundas2->antreneaza(3);
            fundas2->antreneaza(1);
            fundas2->seAccidenteaza();
            fundas2->antreneaza(1);
            Jucator* fundas3 = new Fundas("Fundas3", 35, "fundas", getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), false);
            Jucator* fundas4 = new Fundas("Fundas4", 36, "fundas", getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), false);
            Jucator* fundas5 = new Fundas("Fundas5", 29, "fundas", getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), false);
            fundas5->afiseazaDetalii();
            Jucator* mijlocas1 = new Mijlocas("Mijlocas1", 31, "mijlocas", getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), false);
            Jucator* mijlocas2 = new Mijlocas("Mijlocas1", 34, "mijlocas", getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), false);
            mijlocas2->afiseazaDetalii();
            Jucator* mijlocas3 = new Mijlocas("Mijlocas1", 29, "mijlocas", getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), false);
            mijlocas3->afiseazaDetalii();
            Jucator* mijlocas4 = new Mijlocas("Mijlocas1", 22, "mijlocas", getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), false);
            Jucator* atacant1 = new Atacant("Atacant1", 22, "atacant", getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), true);
            atacant1->antreneaza(4);
            atacant1->revineDupaAccidentare();
            atacant1->antreneaza(3);
            atacant1->antreneaza(2);
            Jucator* atacant2 = new Atacant("Atacant2", 29, "atacant", getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), true);
            atacant2->revineDupaAccidentare();
            atacant2->antreneaza(3);
            atacant2->afiseazaDetalii();
            Jucator* atacant3 = new Atacant("Atacant3", 31, "atacant", getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), getRandVal(), false);
            std::vector<Jucator*> jucatori;
            jucatori.push_back(portar1);
            jucatori.push_back(portar2);
            jucatori.push_back(fundas1);
            jucatori.push_back(fundas2);
            jucatori.push_back(fundas3);
            jucatori.push_back(fundas4);
            jucatori.push_back(fundas5);
            jucatori.push_back(mijlocas1);
            jucatori.push_back(mijlocas2);
            jucatori.push_back(mijlocas3);
            jucatori.push_back(mijlocas4);
            jucatori.push_back(atacant1);
            jucatori.push_back(atacant2);
            jucatori.push_back(atacant3);
            std::string numeAntrenor = "Antrenor";
            Antrenor antrenor(numeAntrenor, jucatori);
            std::string numeEchipa = "Echipa";
            Echipa echipa(numeEchipa, 0, antrenor, jucatori);
            echipe.push_back(echipa);
        }
        Campionat ligaRomaniei(echipe);
        std::cout << "In campionat sunt " << Campionat::numarEchipe() << " echipe si " << Campionat::numarJucatori() << " jucatori" << '\n';
        Campionat::joacaCampionat();
    } catch(AntrenamentIndisponibil& err) {
        std::cout << err.what() << '\n';
    } catch(MeciIndisponibil& err) {
        std::cout << err.what() << '\n';
    } catch(EchipaCampioana& err){
        std::cout << err.what() << '\n';
    } catch(EroareAplicatie& err){
        std::cout << err.what();
    }
    return 0;
}
