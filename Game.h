//
// Created by administrator on 2/19/25.
//
#ifndef GAME_H
#define GAME_H

#include "Die.h"
#include "GameState.h"

class Game {
public:
    Game(int target_score = 20);
    void displayRules() const;
    void takeTurn() ;
    void playGame();

private:
    GameState game_state;
    Die die;
    int target_score;


    void hold(int turn_score);
};

#endif // GAME_H

