#include "chef.h"
using namespace std;

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef " << chefName << " konstruktori." << endl;
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
    int annokset = ainestenMaara / 5;
    cout << "Chef " << chefName << " with "<< ainestenMaara << " items can make salad " << annokset << " portions." << endl;
    return annokset;
}

int Chef::makeSoup(int ainestenMaara)
{
    int keittoannokset = ainestenMaara / 3;
    cout << "Chef " << chefName << " with "<< ainestenMaara << " items can make soup " << keittoannokset << " portions." << endl;
    return keittoannokset;
}











