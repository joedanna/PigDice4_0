//
// Created by administrator on 2/19/25.
//

#ifndef GAMESTATE_H
#define GAMESTATE_H

class GameState {
public:
    GameState();

    int getScore() const;
    int getTurn() const;
    bool isGameOver() const;

    void incrementTurn();
    void addScore(int turn_score);
    void setGameOver();

private:
    int score;
    int turn;
    bool game_over;
};

#endif // GAMESTATE_H
