#include "pankkitili.h"


Pankkitili::Pankkitili(string nimi)
{
    nimi = omistaja;
    cout << "Pankkitili luotu " << omistaja << ":lle" << endl;
}

double Pankkitili::getBalance()
{

}

bool Pankkitili::deposit(double talletus)
{
    if (talletus < 0) {
        return false;
    } else {
        saldo = saldo + talletus;
        cout << "Pankkitili: talletus " << talletus << " tehty" << endl;
    }
    return true;
}

bool Pankkitili::withdraw(double nosto)
{
    if (nosto < 0 || saldo < nosto ) {
        return false;
    } else {
        saldo = saldo - nosto;
        cout << "Pankkitili: nosto " << nosto << " tehty" << endl;
    }

    return true;

}










