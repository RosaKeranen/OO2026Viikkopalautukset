#include "luottotili.h"


Luottotili::Luottotili(string tilinOmistaja, double omaLuottoraja ) : Pankkitili(tilinOmistaja)
{
    omistaja = tilinOmistaja;
    luottoRaja = omaLuottoraja;
    cout << "Luottotili luotu " << omistaja << ":lle" << endl;
}

bool Luottotili::deposit(double talletus)
{
    if (talletus < 0) {
        return false;
    } else {
        saldo = saldo + talletus;
        //cout << "Luottotili: talletus " << talletus << " tehty" << endl;
        //Mutta saldo ei saa mennä yli 0 !!
    }
    return true;
}

bool Luottotili::withdraw(double nosto)
{
    if (nosto < 0 || nosto > luottoRaja) {
        return false;
    } else {
        saldo = saldo - nosto;
    } //mutta jos tässä vaiheessa menee yli luottorajan?
    return true;
}






