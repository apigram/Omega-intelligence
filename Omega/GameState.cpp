/* 
 * File:   GameState.cpp
 * Author: Andrew
 * 
 * Created on April 29, 2016, 10:00 PM
 */

#include "GameState.h"
#include "Game.h"

GameState::GameState() {
}

GameState::GameState(const GameState& orig) {
}

GameState::~GameState() {
    delete [] referenceList;
}

