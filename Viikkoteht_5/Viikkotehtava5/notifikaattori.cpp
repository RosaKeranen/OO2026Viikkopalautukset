#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"
using namespace std;

Notifikaattori::Notifikaattori()
{
    cout << "Luodaan notifikaattori." << endl;
    seuraajat = nullptr;
}

void Notifikaattori::lisaa(Seuraaja* s)
{
    if (s == nullptr) return;

    s->next = seuraajat;
    seuraajat = s;

    cout << "Notifikaattori lisaa seuraajan " << s->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja* s)
{
    if (seuraajat == nullptr || s == nullptr) return;

    cout << "Notifikaattori poistaa seuraajan " << s->getNimi() << endl;

    if (seuraajat == s) {
        seuraajat = seuraajat->next;
        s->next = nullptr;
        return;
    }

    Seuraaja* nykyinen = seuraajat;
    while (nykyinen->next != nullptr && nykyinen->next != s) {
        nykyinen = nykyinen->next;
    }

    if (nykyinen->next == s) {
        nykyinen->next = s->next;
        s->next = nullptr;
    }

}

void Notifikaattori::tulosta()
{
    cout << "Notifikaattorin seuraajat:" << endl;
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr) {
        cout << nykyinen->getNimi() << endl;
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::postita(string postitettuViesti)
{
    cout << "Notifikaattori postaa viestin " << postitettuViesti << endl;
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr) {
        nykyinen->paivitys(postitettuViesti);
        nykyinen = nykyinen->next;
    }
}










