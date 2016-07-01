/* 
 * File:   Grid.cpp
 * Author: Andrew
 * 
 * Created on July 1, 2016, 10:05 PM
 */

#include "Grid.h"
#include <exception>

class GridIndexOutOfBounds : public std::exception {
    const char* what() const throw()
    {
        return "Array index out of bounds.";
    }
} gridIndexException;

template <class T>
Grid<T>::Grid() {
    gridArray = 0;
}

template <class T>
Grid<T>::Grid(int x, int y) {
    xlength = x;
    ylength = y;
    gridArray = new T[ylength][xlength];
}

template <class T>
Grid<T>::Grid(const Grid& orig) {
    xlength = orig.xlength;
    ylength = orig.ylength;
    gridArray = new T[ylength][xlength];
    for (int y = 0; y < orig.ylength; y++)
    {
        for (int x = 0; x < orig.xlength; x++)
            gridArray = orig.gridArray[y][x];
    }
}

template <class T>
Grid<T>::~Grid() {
    if (gridArray != 0)
    {
        for (int i = 0; i < ylength; i++)
        {
            delete [] gridArray[i];
        }
        delete [] gridArray;
        gridArray = 0;
    }
}

template <class T>
T& Grid::operator() (const int x, const int y) {
    try {
        if (x > xlength || x < 0)
            throw gridIndexException;
        if (y > ylength || y < 0)
            throw gridIndexException;
        return gridArray[y][x];
    }
    catch (...)
    {
        
    }
}

template <class T>
const T& Grid::operator() (const int x, const int y) {
    try {
        if (x > xlength || x < 0)
            throw gridIndexException;
        if (y > ylength || y < 0)
            throw gridIndexException;
        return gridArray[y][x];
    }
    catch (...)
    {
        
    }
}

