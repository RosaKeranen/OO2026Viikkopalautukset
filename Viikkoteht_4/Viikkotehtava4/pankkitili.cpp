#include "pankkitili.h"


Pankkitili::Pankkitili(string omistajanNimi)
{
    omistaja = omistajanNimi;
    cout << "Pankkitili luotu " << omistaja << ":lle" << endl;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double talletus)
{
    if (talletus < 0) {
        return false;
    } else {
        saldo = saldo + talletus;
    }
    return true;
}

bool Pankkitili::withdraw(double nosto)
{
    if (nosto < 0 || saldo < nosto ) {
        return false;
    } else {
        saldo = saldo - nosto;
    }

    return true;

}










