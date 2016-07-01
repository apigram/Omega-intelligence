/* 
 * File:   GameData.h
 * Author: Andrew
 *
 * Created on July 1, 2016, 9:50 PM
 */

#ifndef GAMEDATA_H
#define	GAMEDATA_H

class GameData {
public:
    GameData();
    GameData(const GameData& orig);
    virtual ~GameData();
    
    virtual void Serialise() = 0;
    virtual void Deserialise() = 0;
    
private:
};

#endif	/* GAMEDATA_H */

