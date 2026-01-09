#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum) {
    int arvattuLuku;
    int satunnaisluku;
    int arvaustenMaara = 0;

    srand(time(NULL));
    satunnaisluku = rand() % maxnum + 1; // 1-maxnum väliltä arvotaan lukuja
    //cout << satunnaisluku << endl;
    //Yllä olevalla rivillä testasin printaamalla, että tulee arvotuksi oikeanlainen luku

    do {
        cout << "Kirjoita numero:";
        cin >> arvattuLuku;
        arvaustenMaara++;

        if (arvattuLuku < satunnaisluku) {
            cout << "Liian pieni.";
        } else if (arvattuLuku > satunnaisluku) {
            cout << "Liian suuri.";
        }
    } while (arvattuLuku != satunnaisluku);

    cout << "Oikein arvattu!" << endl;

    return arvaustenMaara;
}

int main()
{
    int tulos = game(5);
    cout << "Arvausten maara: " << tulos << endl;
    return 0;
}
