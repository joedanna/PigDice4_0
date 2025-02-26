//
// Created by administrator on 2/19/25.
//

#include "Game.h"
#include <iostream>
using namespace std;

Game::Game(int target_score) : target_score(target_score) {}

void Game::displayRules() const {
    cout << "Let's Play PIG Dice!\n* See how many turns it takes you to get to " << target_score << ".\n";
    cout << "* Turn ends when you hold or roll a 1\n* If you roll a 1, you lose all points for the turn\n";
    cout << "* If you hold, you save all points for the turn\n";
}

void Game::playGame() {
    displayRules();
    while (!game_state.isGameOver()) {
        game_state.incrementTurn();
        cout << "\nTURN " << game_state.getTurn() << endl;
        takeTurn();
    }
    cout << "You finished with a final score of 20 or more in " << game_state.getTurn() << " turns!" << endl;
}

void Game::takeTurn() {
    int turn_score = 0;
    char letter;
    while (true) {
        cout << "roll or hold? (r/h): ";
        cin >> letter;
        if (letter == 'r') {
            int die_roll = die.roll();
            cout << "Die: " << die_roll << endl;
            if (die_roll == 1) {
                cout << "Turn Over. No Score.\n";
                return;
            } else {
                turn_score += die_roll;
            }
        } else if (letter == 'h') {
            hold(turn_score);
            return;
        } else {
            cout << "Invalid choice! Try again." << endl;
        }
    }
}

void Game::hold(int turn_score) {
    game_state.addScore(turn_score);
    cout << "Score for turn: " << turn_score << endl;
    cout << "Total Score: " << game_state.getScore() << endl;
    if (game_state.getScore() >= target_score) {
        game_state.setGameOver();
    }
}

