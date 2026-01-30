#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    Asiakas asiakas1("Aapeli", 1000);
    asiakas1.talletus(20);
    asiakas1.nosto(-10);
    asiakas1.luotonNosto(558.98);
    asiakas1.luotonMaksu(500);
}
