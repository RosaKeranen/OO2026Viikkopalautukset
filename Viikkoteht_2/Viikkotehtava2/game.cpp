#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int max)
{
    maxNumber;
    playerGuess;
    randomNumber;
    numOfGuesses = 0;
}

Game::~Game()
{

}

void Game::play()
{
    cout << "Give your maximum number: " << endl;
    cin >> maxNumber;

    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1; // 1-maxnum väliltä arvotaan lukuja
    //cout << satunnaisluku << endl;
    //Yllä olevalla rivillä testasin printaamalla, että tulee arvotuksi oikeanlainen luku

    do {
        cout << "Give your guess between 1 and :" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber) {
            cout << "Your guess is too small."; << endl;
            cout << "Give your guess between 1 and  " << maxNumber << "." << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Your guess is too big.";
            cout << "Give your guess between 1 and  " << maxNumber << "." << endl;
        }
    } while (playerGuess != randomNumber);

}

void Game::printGameResult()
{
    cout << "You guessed the right number: " << randomNumber << " with " << numOfGuesses << " guesses!" << endl;
}







