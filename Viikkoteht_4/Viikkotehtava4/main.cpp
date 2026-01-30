#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    Asiakas asiakas1("Aapeli", 1000);
    asiakas1.talletus(200.50);
    asiakas1.nosto(100);
}
