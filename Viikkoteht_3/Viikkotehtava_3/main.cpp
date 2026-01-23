#include "italianchef.h"
#include <iostream>
using namespace std;

int main()
{
    Chef Kokki("Gordon");
    Kokki.makeSalad(11);
    Kokki.makeSoup(14);
    cout << "" << endl;
    ItalianChef ItalianKokki("Mario");
    ItalianKokki.makeSalad(9);
    ItalianKokki.askSecret("pizza", 12, 12);
}
