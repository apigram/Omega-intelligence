/* 
 * File:   Tree.cpp
 * Author: Andrew
 * 
 * Created on June 24, 2016, 10:55 PM
 */

#include "Tree.h"

template <class T>
Tree<T>::Tree() {
    nodes = 0;
    size = 0;
}

template <class T>
Tree<T>::Tree(const Tree& orig) {
}

template <class T>
Tree<T>::~Tree() {
}

// Add a node to the tree. For special trees such as a Binary Heap, this should be overridden to rearrange the nodes to maintain order.
template <class T>
void AddNode(T data, int* leafNodes)
{
    // Add node to the end of the tree.
}

// Remove the nth occurrence of the data from the tree. For special trees such as a Binary Heap, this should be overridden to rearrange the nodes to maintain order.
// This will default to the first occurrence.
template <class T>
void RemoveNode(T data, int occurrence = 1)
{
    // Locate the nth occurrence of the node.
    // Remove the node from the tree.
    // Reparent any leaf nodes the removed node had.
}

