/* 
 * File:   Graph.h
 * Author: Andrew
 *
 * Created on July 1, 2016, 10:04 PM
 */

#ifndef GRAPH_H
#define	GRAPH_H

#include "InternalUtils.h"
#include <queue>
#include "GameData.h"

template <class T>
class Graph : public GameData {
public:
    Graph();
    Graph(const Graph& orig);
    virtual ~Graph();
    
    void AddNode(T data, int connections[]);
    std::queue<Node<T> > TracePath(int start, int end); // return a constructed queue of the path taken.
private:
    Node<T>* nodeList;
};

#endif	/* GRAPH_H */

