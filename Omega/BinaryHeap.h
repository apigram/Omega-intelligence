/* 
 * File:   BinaryHeap.h
 * Author: Andrew
 *
 * Created on June 24, 2016, 10:55 PM
 */

#ifndef BINARYHEAP_H
#define	BINARYHEAP_H
#include "Tree.h"
#include "InternalUtils.h"

template <class T>
class BinaryHeap : public Tree<T> {
public:
    BinaryHeap();
    BinaryHeap(T array[]);
    BinaryHeap(const BinaryHeap& orig);
    virtual ~BinaryHeap();
    
    void AddNode(T data, int* leafNodes);
    void RemoveNode(T data, int occurrence = 1);
private:
    void SiftDown(int position); // reorder the array to form a balanced binary heap.
    void SiftUp(int position); // reorder the array to form a balanced binary heap.
    void Swap(int index1, int index2);
};

#endif	/* BINARYHEAP_H */

