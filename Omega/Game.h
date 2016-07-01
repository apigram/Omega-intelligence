/* 
 * File:   Game.h
 * Author: Andrew
 * 
 * This class is an abstract representation of a game. It contains the state tree
 *
 * Created on April 29, 2016, 10:00 PM
 */

#ifndef GAME_H
#define	GAME_H

#include <vector>

class GameState;

enum PathMethod {
    DIJKSTRA, ASTAR     
};

class Game {
public:
    Game();
    Game(const Game& orig);
    virtual ~Game();
    
    //void Minimax(GameState*) const;
    void ShortestPath(GameState*, PathMethod) const;
    //void QueueState(GameState*);
    //GameState* DequeueState();
    
    //GameState* StateAtIndex(int);
private:
    void MemoriseStates();
    void RecallStates();
    
    GameState** stateTree; // This is a 1D array of GameState pointers despite being a pointer to a pointer. This is because GameState is a polymorphic base class and must be a pointer for RTTI.
    int* path; // array of indexes tracing the currently traversed path.
    int currentState;
};



#endif	/* GAME_H */

