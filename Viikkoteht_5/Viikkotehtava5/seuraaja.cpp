#include "seuraaja.h"
#include <iostream>
//using namespace std;

Seuraaja::Seuraaja(string seuraajanNimi)
{
    nimi = seuraajanNimi;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout << "Seuraaja " << nimi << " sai viestin " << viesti << endl;
}




