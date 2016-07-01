/* 
 * File:   GameData.h
 * Author: pi
 *
 * Created on 5 May 2016, 8:12 PM
 */

#ifndef GAMEDATA_H
#define	GAMEDATA_H

class GameData {
public:
    GameData();
    GameData(const GameData& orig);
    virtual ~GameData();
    
    virtual void* getData() = 0;
    virtual void LoadData() = 0;
private:

};

#endif	/* GAMEDATA_H */

