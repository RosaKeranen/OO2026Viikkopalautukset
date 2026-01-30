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
        cout << "Ei onnistu. Talletus ei saa olla negatiivinen luku." << endl;
        return false;
    } else {
        saldo = saldo + talletus;
    }
    return true;
}

bool Pankkitili::withdraw(double nosto)
{
    if (nosto < 0) {
        cout << "Ei onnistu. Nosto ei saa olla negatiivinen luku." << endl;
        return false;
    }

    if (saldo < nosto) {
        cout << "Ei onnistu. Tililla ei ole tarpeeksi rahaa." << endl;
        return false;
    }

    saldo = saldo - nosto;
    return true;
}










