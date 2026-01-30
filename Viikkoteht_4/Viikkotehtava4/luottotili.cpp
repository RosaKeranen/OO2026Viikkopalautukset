#include "luottotili.h"


Luottotili::Luottotili(string tilinOmistaja, double omaLuottoraja ) : Pankkitili(tilinOmistaja)
{
    saldo = omaLuottoraja;
    omistaja = tilinOmistaja;
    luottoRaja = omaLuottoraja;
    cout << "Luottotili luotu " << omistaja << ":lle" << endl;
}

bool Luottotili::deposit(double talletus)
{
    if (talletus < 0) {
        cout << "Ei onnistu. Talletus ei saa olla negatiivinen luku." << endl;
        return false;
    }

    if (saldo + talletus > luottoRaja) {
        cout << "Ei onnistu. Luottotilin saldo ei saa menna yli luottorajan." << endl;
        return false;
    }

    saldo = saldo + talletus;
    return true;
}

bool Luottotili::withdraw(double nosto)
{
    if (nosto < 0) {
        cout << "Ei onnistu. Nosto ei saa olla negatiivinen luku." << endl;
        return false;
    }

    if (saldo - nosto < -luottoRaja) {
        cout << "Ei onnistu. Luottoraja tuli vastaan." << endl;
        return false;
    }

    saldo = saldo - nosto;
    return true;
}






