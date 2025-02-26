//
// Created by administrator on 2/19/25.
//
#ifndef DIE_H
#define DIE_H

class Die {
public:
    Die(int sides = 6);
    int roll() const;

private:
    int sides;
};

#endif // DIE_H





