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


std::vector<Echipa> teams;

int main(){
    try {
        for(int i = 0; i < 10; i ++) {
            /// voi crea 10 echipe in campionat
            Jucator* portar1 = new Portar("Portar1", 27, "portar", 30, 40, 22, 38, 55, 80, false, 97, 95);
            portar1->antreneaza();
            //portar1->seAccidenteaza();
            portar1->antreneaza();
            Jucator* portar2 = new Portar("Portar2", 25, "portar", 36, 33, 29, 48, 45, 77, false, 91, 96);
            Jucator* fundas1 = new Fundas("Fundas1", 33, "fundas", 80, 88, 83, 77, 69, 66, false);
            Jucator* fundas2 = new Fundas("Fundas2", 22, "fundas", 77, 75, 70, 81, 80, 92, false);

            fundas2->antreneaza();
            fundas2->antreneaza();
            //fundas2->seAccidenteaza();
            fundas2->antreneaza();


            Jucator* fundas3 = new Fundas("Fundas3", 35, "fundas", 88, 66, 82, 77, 81, 80, false);
            Jucator* fundas4 = new Fundas("Fundas4", 36, "fundas", 60, 68, 75, 80, 59, 69, false);

            Jucator* fundas5 = new Fundas("Fundas5", 29, "fundas", 88, 77, 71, 79, 81, 72, false);
            fundas5->afiseazaDetalii();


            Jucator* mijlocas1 = new Mijlocas("Mijlocas1", 31, "mijlocas", 90, 88, 81, 86, 79, 77, false);

            Jucator* mijlocas2 = new Mijlocas("Mijlocas1", 34, "mijlocas", 81, 84, 83, 85, 82, 90, false);
            mijlocas2->afiseazaDetalii();

            Jucator* mijlocas3 = new Mijlocas("Mijlocas1", 29, "mijlocas", 77, 76, 81, 87, 91, 93, false);
            mijlocas3->afiseazaDetalii();

            Jucator* mijlocas4 = new Mijlocas("Mijlocas1", 22, "mijlocas", 88, 82, 80, 90, 93, 91, false);

            Jucator* atacant1 = new Atacant("Atacant1", 22, "atacant", 91, 90, 88, 86, 81, 83, false);
            //atacant1->antreneaza();
            //atacant1->revineDupaAccidentare();
            atacant1->antreneaza();
            atacant1->antreneaza();

            Jucator* atacant2 = new Atacant("Atacant2", 29, "atacant", 99, 96, 92, 88, 74, 88, false);
            //atacant2->revineDupaAccidentare();
            atacant2->antreneaza();
            atacant2->afiseazaDetalii();


            Jucator* atacant3 = new Atacant("Atacant3", 31, "atacant", 88, 99, 95, 95, 60, 75, false);

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
            std::vector<Jucator*> jucatori2;
            for(auto it : jucatori){
                jucatori2.push_back(it->clone());
            }
            Echipa echipa(numeEchipa, 0, antrenor, jucatori2);

            teams.push_back(echipa);

        }
        Campionat ligaRomaniei(teams);
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
