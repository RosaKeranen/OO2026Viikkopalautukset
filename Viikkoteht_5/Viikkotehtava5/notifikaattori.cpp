#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"
using namespace std;

Notifikaattori::Notifikaattori()
{
    seuraajat = nullptr;
}

void Notifikaattori::lisaa(Seuraaja* s)
{
    if (s == nullptr) return;

    s->next = seuraajat;
    seuraajat = s;
}

void Notifikaattori::poista(Seuraaja* s)
{
    if (seuraajat == nullptr || s == nullptr) return;

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
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr) {
        cout << nykyinen->getNimi() << endl;
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::postita(string postitettuViesti)
{
    postitettuViesti = "Kukkuu!";
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr) {
        nykyinen->paivitys(postitettuViesti);
        nykyinen = nykyinen->next;
    }
}










