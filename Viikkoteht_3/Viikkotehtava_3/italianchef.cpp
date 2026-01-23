#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name)
{

}

ItalianChef::~ItalianChef()
{
    cout << "Chef " << chefName << " destruktori." << endl;
}

bool ItalianChef::askSecret(string passw, int flour, int water)
{
    if (passw == password)
    {
        makepizza(flour, water);
        return true;
    }

    return false;
}

int ItalianChef::makepizza(int jauhoMaara, int vesiMaara)
{
    if (jauhoMaara < 5 && vesiMaara < 5) {
        return 0;
    }

    if (jauhoMaara < vesiMaara) {
        return jauhoMaara / 5;
    } else {
        return vesiMaara / 5;
    }
}






