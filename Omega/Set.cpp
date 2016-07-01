/* 
 * File:   Set.cpp
 * Author: Andrew
 * 
 * Created on June 24, 2016, 10:56 PM
 */

#include "Set.h"
#include "BinaryHeap.h" // this is used for constructing binary heaps to speed up searching when performing set operations.
#include "SetPredicate.h"

template <class T>
Set<T>::Set() {
    objs = 0;
}

template <class T>
Set<T>::Set(T array[])
{
    int numObjects = sizeof(array) / sizeof(T);
    objs = new T[numObjects];
    for (int i = 0; i < numObjects; i++)
    {
        objs[i] = array[i];
    }
}

template <class T>
Set<T>::Set(const Set& orig) {
    int numObjects = sizeof(orig.objs) / sizeof(T);
    if (objs != 0)
    {
        delete [] objs;
        objs = 0;
    }
    
    objs = new T[numObjects];
    
    for (int i = 0; i < numObjects; i++)
    {
        this->objs[i] = orig.objs[i];
    }
}

template <class T>
Set<T>::~Set() {
    if (objs != 0)
    {
        delete [] objs;
    }
    objs = 0;
}

// Add an object to the end of the set.
template <class T>
void Set<T>::AddObject(T obj)
{
    int numObjects = sizeof(objs) / sizeof(T);
    T* copiedObjs = new T[numObjects];
    
    for (int i = 0; i < numObjects; i++)
    {
        copiedObjs[i] = this->objs[i];
    }
    
    delete [] objs;
    objs = new T[numObjects + 1];
    
    for (int i = 0; i < numObjects; i++)
    {
        objs[i] = copiedObjs[i];
    }
    
    objs[numObjects] = obj;
    
    delete [] copiedObjs;
}

template <class T>
void Set<T>::DeleteObject()
{
    
}

// Use of this operator is primarily for testing, but can be useful in other circumstances.
template <class T>
bool Set<T>::operator ==(const Set& b)
{
    int aNumObjects = sizeof(this->objs) / sizeof(T);
    int bNumObjects = sizeof(b.objs) / sizeof(T);
    if (aNumObjects != bNumObjects)
        return false;
    
    BinaryHeap<T> setHeap(this->objs);

    for (int i = 0; i < bNumObjects; i++)
    {
        // If a value is not found in the search tree, the set is not equal.
        // This may be too simple. May need to allow for duplicate values.
        if (setHeap.findValue(b.objs[i]) == -1)
        {
            return false;
        } 
    }
    return true;
}

template <class T>
Set<T> Set<T>::operator +(const Set& b)
{
    // Create a new set with the contents of both sets (including duplicates). Equivalent to a concatenation.
    int aNumObjects = sizeof(this->objs) / sizeof(T);
    int bNumObjects = sizeof(b.objs) / sizeof(T);
    T* setObjs = new T[aNumObjects + bNumObjects];
    for (int i = 0; i < aNumObjects; i++)
    {
        setObjs[i] = this->objs[i];
    }
    
    for (int i = 0; i < bNumObjects; i++)
    {
        setObjs[aNumObjects - 1 + i] = b.objs[i];
    }
    Set<T> newSet(setObjs);
    
    delete [] setObjs;
    
    return newSet;
}

template <class T>
Set<T> Set<T>::operator |(const Set& b)
{
    // Compare the contents of both sets, and return a new set with the contents of both sets (filtering out duplicates).
    int aNumObjects = sizeof(this->objs) / sizeof(T);
    int bNumObjects = sizeof(b.objs) / sizeof(T);
    BinaryHeap<T> setHeap(this->objs);
    T* setObjs = new T[aNumObjects + bNumObjects]; // refine this so we only allocate as much space as we need to.
    for (int i = 0; i < aNumObjects; i++)
    {
        setObjs[i] = this->objs[i];
    }
    
    for (int i = 0; i < bNumObjects; i++)
    {
        if (setHeap.findValue(b.objs[i]) == -1)
        {
            // Add the value to the list of set objects, and add the value to the search tree. Sorting of the tree will happen automatically.
            setObjs[aNumObjects - 1 + i] = b.objs[i];
            setHeap.AddNode(b.objs[i], 0);
        } 
    }
    
    Set newSet(setObjs);
    
    return newSet;
}

template <class T>
Set<T> Set<T>::operator &(const Set& b)
{
    // Compare the contents of both sets, and return a new set with the contents that are common to both sets (filtering out duplicates).
    int bNumObjects = sizeof(b.objs) / sizeof(T);
    BinaryHeap<T> setHeap(this->objs);
    T* setObjs = new T[bNumObjects];

    for (int i = 0; i < bNumObjects; i++)
    {
        // if a value is found in the search tree, add it to the list of set objects.
        if (setHeap.findValue(b.objs[i]) != -1)
        {
            // Add the value to the list of set objects, and add the value to the search tree. Sorting of the tree will happen automatically.
            setObjs[i] = b.objs[i];
        } 
    }
    
    Set newSet(setObjs);
    
    return newSet;
}

template <class T>
Set<T> Set<T>::operator -(const Set& b)
{
    // Compare the contents of both sets, and return a new set with the contents of this set (Set A) that are not in the other set (Set B).
    int aNumObjects = sizeof(this->objs) / sizeof(T);
    BinaryHeap<T> setHeap(b.objs);
    T* setObjs = new T[aNumObjects];
    
    for (int i = 0; i < aNumObjects; i++)
    {
        if (setHeap.findValue(this->objs[i]) == -1)
        {
            // Add the value to the list of set objects, and add the value to the search tree. Sorting of the tree will happen automatically.
            setObjs[i] = b.objs[i];
        } 
    }
    
    Set newSet(setObjs);
    
    return newSet;
}

template <class T>
Set<T> Set<T>::GetPredicateSet()
{
    
}

void Set<T>::AddPredicate(SetPredicate<T> pred)
{
    // Add the predicate to the list, and update its result based on the values in this set.
}

