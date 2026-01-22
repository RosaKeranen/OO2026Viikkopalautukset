#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int max)
{
    maxNumber = max;
    numOfGuesses = 0;
    cout << "Debuggaus-tulostusta. GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value." << endl;

    //Käyttäjä ei ole vielä antanut omaa maxNumberia.
    //Joten tässä vaiheessa tulostuu äsken maxNumber-muuttujaan alustettu luku 0.
}

Game::~Game()
{
    cout << "Debuggaus-tulostusta. GAME DESTRUCTOR: object cleared from stack memory." << endl;
}

void Game::play()
{
    cout << "Debuggaus-tulostusta. Tama on Game::play -funktio." << endl;
    cout << "Give your maximum number: " << endl;
    cin >> maxNumber;

    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1; // 1-maxnum väliltä arvotaan lukuja

    do {
        cout << "Give your guess between 1 and " << maxNumber << "." << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber) {
            cout << "Your guess is too small." << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Your guess is too big." << endl;
        }
    } while (playerGuess != randomNumber);

    printGameResult();

}

void Game::printGameResult()
{
    cout << "You guessed the right number = " << randomNumber << " with " << numOfGuesses << " guesses!" << endl;
    cout << "Debuggaus-tulostusta. Tama oli Game::printGameResult() -funktio." << endl;
}







