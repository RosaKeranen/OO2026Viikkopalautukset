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
    cout << "Luottotili: talletus " << summa << " tehty, luottotilillä on nyt " << luottotili.getBalance() << endl;

    bool result = luottotili.deposit(summa);

    showSaldo();
    return result;
}

bool Asiakas::luotonNosto(double summa)
{
    cout << "Luottotili: nosto " << summa << " tehty, luottoa jäljellä " << luottotili.getBalance() << endl;

    bool result = luottotili.withdraw(summa);

    showSaldo();
    return luottotili.withdraw(summa);
}

/*bool Asiakas::tiliSiirto(double summa, Asiakas &)
{

}*/
















