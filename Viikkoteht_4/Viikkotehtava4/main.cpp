#include <iostream>
//#include "pankkitili.h"
//#include "luottotili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    Asiakas asiakas1("Aapeli", 1000);
    asiakas1.talletus(200);
    Asiakas asiakas2("Bertta", 2000);
    asiakas2.talletus(100);

    Asiakas & vastaanOttaja = asiakas2;
    asiakas1.tiliSiirto(50, vastaanOttaja);

    asiakas2.showSaldo();

}
