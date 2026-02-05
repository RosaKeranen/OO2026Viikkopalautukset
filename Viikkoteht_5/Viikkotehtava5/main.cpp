#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori notifikaattori;

    Seuraaja a("Sebastian");
    Seuraaja b("Helena");
    Seuraaja c("Anselmi");

    notifikaattori.lisaa(&a);
    notifikaattori.lisaa(&b);
    notifikaattori.lisaa(&c);

    notifikaattori.tulosta();
    notifikaattori.postita("Viesti numero yksi!");

    notifikaattori.poista(&c);
    notifikaattori.tulosta();
    notifikaattori.postita("Viesti numero kaksi!");

    return 0;
}
