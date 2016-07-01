/* 
 * File:   Grid.h
 * Author: Andrew
 *
 * Created on July 1, 2016, 10:05 PM
 */

#ifndef GRID_H
#define	GRID_H

template <class T>
class Grid : public GameData {
public:
    Grid();
    Grid(int x, int y);
    Grid(const Grid& orig);
    virtual ~Grid();
    
    T& operator() (const int x, const int y);
    const T& operator() (const int x, const int y);
private:
    T** gridArray;
    int xlength;
    int ylength;
};

#endif	/* GRID_H */

