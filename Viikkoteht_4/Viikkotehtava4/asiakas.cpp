#include "asiakas.h"

Asiakas::Asiakas(string nimi, double saldo)
{
    kayttotili = Pankkitili(nimi);
    luottotili = Luottotili(nimi,saldo);
}

string Asiakas::getNimi()
{

}

void Asiakas::showSaldo()
{
    cout << "Kayttotilin saldo " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double)
{

}

bool Asiakas::nosto(double)
{

}

bool Asiakas::luotonMaksu(double)
{

}

bool Asiakas::luotonNosto(double)
{

}














