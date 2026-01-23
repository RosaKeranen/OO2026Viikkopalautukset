#include "chef.h"
using namespace std;

Chef::Chef(string name)
{
    chefName = name;
}

Chef::~Chef()
{
    cout << "Chef " << chefName << " destruktori."<< endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int ainestenMaara)
{
    return ainestenMaara / 5;
}

int Chef::makeSoup(int ainestenMaara)
{
    return ainestenMaara / 3;
}











