#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Seuraaja a("Nala");
    Seuraaja b("Kaffe");
    Seuraaja c("Miisu");

    //a.next = &b;   // pointteri osoittaa toiseen olioon

    //cout << a.getNimi() << endl;
    //cout << a.next->getNimi() << endl;  // -> koska pointteri

    //a.paivitys("Viesti Nalalle!");

    Notifikaattori n;
    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);

    n.tulosta();


    return 0;
}
