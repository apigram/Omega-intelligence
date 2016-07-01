/* 
 * File:   BinaryHeap.cpp
 * Author: Andrew
 * 
 * Created on June 24, 2016, 10:55 PM
 */

#include "BinaryHeap.h"

template <class T>
BinaryHeap<T>::BinaryHeap()
    : Tree<T>() {
}

template <class T>
BinaryHeap<T>::BinaryHeap(T array[]) {
    size = sizeof(array) / sizeof(T);
    nodes = new Node<T>[size];
    for (int i = 0; i < size; i++)
    {
        nodes[i].data = array[i];
        this->SiftUp(i);
    }
}

template <class T>
BinaryHeap<T>::BinaryHeap(const BinaryHeap& orig) {
}

template <class T>
BinaryHeap<T>::~BinaryHeap(){
    if (nodes != 0)
    {
        delete [] nodes;
        nodes = 0;
        size = 0;
    }
}

template <class T>
void BinaryHeap<T>::AddNode(T data, int* leafNodes)
{
    Node<T>* copyArr = new Node<T>[size];
    for (int i = 0; i < size; i++)
    {
        copyArr[i] = nodes[i];
    }
    
    delete [] nodes;
    
    nodes = new Node<T>[++size];
    for (int i = 0; i < size - 1; i++)
    {
        nodes[i] = copyArr[i];
    }
    
    nodes[size - 1].data = data;
    nodes[size - 1].indexList = leafNodes;
    
    delete [] copyArr;
    this->SiftUp(size - 1);
}

template <class T>
void BinaryHeap<T>::RemoveNode(T data, int occurrence)
{
    
}

template <class T>
void BinaryHeap<T>::SiftDown(int position)
{
    int pos = position;
    for (; pos < size ;)
    {
        if (nodes[pos].data < nodes[2*pos + 1].data)
        {
            this->Swap(pos, 2*pos + 1);
            pos = 2*pos + 1;
        }
        else if (nodes[pos].data < nodes[2*pos + 2].data)
        {
            this->Swap(pos, 2*pos + 2);
            pos = 2*pos + 2;
        }
        else
        {
            break;
        }
    }
}

template <class T>
void BinaryHeap<T>::SiftUp(int position)
{
    int pos = position;
    for (; pos > 0 && nodes[pos - 1].data < nodes[(pos / 2) - 1].data; pos = (pos / 2) - 1)
    {
        this->Swap(pos - 1, (pos / 2) - 1);
    }
}

template <class T>
void BinaryHeap<T>::Swap(int index1, int index2)
{
    Node<T> temp = nodes[index1];
    nodes[index1] = nodes[index2];
    nodes[index2] = temp;
}

