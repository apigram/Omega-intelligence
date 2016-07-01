/* 
 * File:   Tree.h
 * Author: pi
 *
 * Created on 5 May 2016, 8:14 PM
 */

#ifndef TREE_H
#define	TREE_H

#include "GameData.h"

class Tree : public GameData {
public:
    Tree();
    Tree(const Tree& orig);
    virtual ~Tree();
    
    virtual void* getData();
    virtual void LoadData();
private:
    void** nodes;
};

#endif	/* TREE_H */

