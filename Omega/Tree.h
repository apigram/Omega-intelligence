/* 
 * File:   Tree.h
 * Author: Andrew
 *
 * Created on June 24, 2016, 10:55 PM
 */

#ifndef TREE_H
#define	TREE_H

#include "InternalUtils.h"
#include "GameData.h"

template <class T>
class Tree : public GameData {
public:
    Tree();
    Tree(const Tree& orig);
    virtual ~Tree();
    
    int findValue(T value); // returns the index where the value has been found; otherwise -1
    virtual void AddNode(T data, int* leafNodes);
    virtual void RemoveNode(T data, int occurrence = 1);
    
    void Save();
protected:
    Node<T>* nodes; // array of nodes.
    int size;
};

#endif	/* TREE_H */

