#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>
using namespace std;

class ItalianChef: public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);
private:
    string password = "pizza";
    int makepizza(int, int);
    int flour;
    int water;
};

#endif // ITALIANCHEF_H
