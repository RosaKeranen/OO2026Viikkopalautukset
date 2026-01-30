#include <iostream>
//#include "pankkitili.h"
//#include "luottotili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    Asiakas asiakas1("Aapeli", 1000);
    asiakas1.talletus(500);
    Asiakas asiakas2("Bertta", 2000);
    asiakas2.talletus(100);

    Asiakas* vastaanottaja = &asiakas2; //pointteri tehdään Asiakas-olioon vissiinkin tässä, funktiossa on viite & merkillä
    asiakas1.tiliSiirto(80, *vastaanottaja);

    vastaanottaja = &asiakas1; //vastaanottaja vaihtuu, nyt se on asiakas1
    asiakas2.tiliSiirto(20, *vastaanottaja);

    asiakas1.showSaldo();
    asiakas2.showSaldo();

}
