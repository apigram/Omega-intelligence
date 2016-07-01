/* 
 * File:   Game.cpp
 * Author: Andrew
 * 
 * Created on April 29, 2016, 10:00 PM
 */

#include "Game.h"
#include "GameState.h"

using namespace std;
int calculateMiniMaxScore();
int min(int*, int*, int);

Game::Game() {
}

Game::Game(const Game& orig) {
}

Game::~Game() {
}

// add an element to the end of the queue
/*void Game::QueueState(GameState* newState)
{
    GameState* state = 0;
    int counter = 0;
    GameState** copyTree = new GameState*[sizeof(stateTree) / sizeof(GameState*)];
    while ((state = this->DequeueState()) != 0)
    {
        copyTree[counter] = state;
    }
    
    delete [] stateTree;
    
    stateTree = new GameState*[(sizeof(copyTree) / sizeof(GameState*)) + 1];
    
    
}*/

// remove the first element from the queue
/*GameState* Game::DequeueState()
{
    // deep copy the GameState object and delete this copy
    GameState* dequeuedState = 0;
    
    if (stateTree[0] != 0)
    {
        dequeuedState = new GameState(stateTree[0]);
    }
    
    delete stateTree[0];
    
    while ()
    
    return dequeuedState;
}*/

/*void Game::Minimax(GameState* state) const
{
    stateTree[currentState]->score = calculateMiniMaxScore();
}*/

// This is an implementation of the A* pathfinding algorithm
void Game::ShortestPath(GameState* currentState, PathMethod algorithm) const
{
    switch (algorithm)
    {
        case DIJKSTRA:
            // assign total costs to each state.
            break;
        case ASTAR:
            // calculate heuristic values for each node
            break;
    }
}

/*GameState* Game::StateAtIndex(int index)
{
    // return a deep copy
    return new GameState(stateTree[index]);
}*/

int* calculateMiniMaxPath()
{
    // Construct the state tree.
    // Return the move made for this turn.
}

// this allows dynamic calculation of the A* heuristic to find the shortest path in the most efficient manner.
int calculateHeuristic(Game game, int nodex, int nodey, int goalx, int goaly)
{
    // first, calculate D by determining the immediate choice with the lowest cost.
    //int D = min(game.StateAtIndex(nodex * nodey).getReferences(), game.StateAtIndex(nodex * nodey).getCosts());
    //int dx = game.StateAtIndex(nodex).getCost() - game.StateAtIndex(goalx).getCost();
    //int dy = game.StateAtIndex(nodey).getCost() - game.StateAtIndex(goaly).getCost();
    //return D * (dx + dy);
}

// this will find the immediate shortest path
int min (int* paths, int* costs, int numPaths)
{
    return 0;
}

