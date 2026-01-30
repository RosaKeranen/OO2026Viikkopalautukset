#include "asiakas.h"

Asiakas::Asiakas(string nimi, double luottoraja) : kayttotili(nimi), luottotili(nimi, luottoraja)
{
    cout << "Asiakkuus luotu " << nimi << ":lle, luottoraja " << luottoraja << endl;
    showSaldo();
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Kayttotilin saldo " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo " << luottotili.getBalance() << endl;
    cout << " " << endl;
}

bool Asiakas::talletus(double summa)
{
    cout << "Pankkitili: talletus " << summa << " tehty" << endl;

    bool result = kayttotili.deposit(summa);

    showSaldo();
    return result;
}

bool Asiakas::nosto(double summa)
{
    cout << "Pankkitili: nosto " << summa << " tehty" << endl;

    bool result = kayttotili.withdraw(summa);

    showSaldo();
    return result;
}

bool Asiakas::luotonMaksu(double summa)
{
    bool result = luottotili.deposit(summa);
    cout << "Luottotili: talletus " << summa << " tehty, luottotililla on nyt " << luottotili.getBalance() << endl;

    showSaldo();
    return result;
}

bool Asiakas::luotonNosto(double summa)
{
    bool result = luottotili.withdraw(summa);
    cout << "Luottotili: nosto " << summa << " tehty, luottoa jaljella " << luottotili.getBalance() << endl;

    showSaldo();
    return result;
}

bool Asiakas::tiliSiirto(double summa, Asiakas & vastaanottaja)
{
    if (nosto(summa)){
       vastaanottaja.kayttotili.deposit(summa);

        return true;
    }

    return false;
}
















