#include "luottotili.h"


Luottotili::Luottotili(string tilinOmistaja, double omaLuottoraja ) : Pankkitili(tilinOmistaja)
{
    tilinOmistaja = omistaja;
    omaLuottoraja = luottoRaja;
    cout << "Luottotili luotu " << omistaja << ":lle" << endl;
}

bool Luottotili::deposit(double talletus)
{
    if (talletus < 0) {
        return false;
    } else {
        //saldo = saldo + talletus;
        //cout << "Pankkitili: talletus " << talletus << " tehty" << endl;
    }
    return true;

}

bool Luottotili::withdraw(double nosto)
{
    //jotain tänne...

    return true;
}






