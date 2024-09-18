#include "GameCenter.h"
#include <iostream>
#include <limits>

using namespace std;

GameCenter::GameCenter()
{
    wb.addWord("apple", "The color is red.");
    wb.addWord("banna", "It has a yellow peel.");
    wb.addWord("orange", "Rich in vitamin C and round in shape.");
}

void GameCenter::startGame()
{
    bool continueGame = true;

    while (continueGame)
    {
        Word selectedWord = wb.getRandomWord();
        string guess;
        int attempts = 0;
        const int maxAttempts = 3;

        cout << "Hint: " << selectedWord.getHint() << endl;

        while (attempts < maxAttempts)
        {
            cout << "Enter your guess:";
            cin >> guess;

            if (guess == selectedWord.getWord())
            {
                cout << "You guessed it right!" << endl;
                break;
            }
            else
            {
                ++attempts;
                cout << "Wrong guess. Attempts remaining: " << (maxAttempts - attempts) << endl;
            }
        }

        if (attempts == maxAttempts)
        {
            cout << "You've used all your attempts. The corrext word was: " << selectedWord.getWord() << endl;
        }

        char PlayAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> PlayAgain;

        if (PlayAgain != 'y' && PlayAgain != 'Y')
        {
            continueGame = false;
        }

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Thanks for playing." << endl;
}