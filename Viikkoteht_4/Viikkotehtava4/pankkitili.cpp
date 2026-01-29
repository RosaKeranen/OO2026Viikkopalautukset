#include "pankkitili.h"


Pankkitili::Pankkitili(string)
{

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










