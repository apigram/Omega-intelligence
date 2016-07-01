/* 
 * File:   GameState.h
 * Author: Andrew
 *
 * Represents a single game state. This object operates as a node in the state tree.
 * 
 * Created on April 29, 2016, 10:00 PM
 */

#ifndef GAMESTATE_H
#define	GAMESTATE_H

#include "GameData.h"

class Game;

enum Result {
    LOSE = -10,
    DRAW = 0,
    WIN = 10
};

class GameState {
public:
    GameState();
    GameState(const GameState& orig);
    virtual ~GameState();
    
    virtual void Serialise() = 0;
    virtual void Deserialise() = 0;
    virtual void ConstructState() = 0;
    friend class Game;
protected:
    int* referenceList; // a list of indexes connecting this game state to others.
    int score; // this variable is used for the A* heuristic as well.
    GameData* data; // reference data for the game state. This could be a board layout or a position in a maze.
    Result result; // indicates whether the state represents a victory, loss or neither.
};

#endif	/* GAMESTATE_H */

