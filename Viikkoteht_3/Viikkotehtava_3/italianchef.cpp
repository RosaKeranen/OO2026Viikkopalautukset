#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "ItalianChef " << chefName << " konstruktori." << endl;
}


ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << chefName << " destruktori." << endl;
}

bool ItalianChef::askSecret(string passw, int flour, int water)
{
    if (passw == password)
    {
        cout << "Password ok!" << endl;
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
        int pizzat = jauhoMaara / 5;
        cout << "ItalianChef " << chefName << " with " << jauhoMaara << " flour and " << vesiMaara << " water can make " << pizzat << " pizzas." << endl;
        return pizzat;
    } else {
        int pizzoja = vesiMaara / 5;
        cout << "ItalianChef " << chefName << " with " << jauhoMaara << " flour and " << vesiMaara << " water can make " << pizzoja << " pizzas." << endl;
        return pizzoja;
    }

}






