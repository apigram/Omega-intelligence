/* Defines an unordered set object that can have set operations applied to it.
 * File:   Set.h
 * Author: Andrew
 *
 * Created on June 24, 2016, 10:56 PM
 */

#ifndef SET_H
#define	SET_H

#include <vector>

template <class T>
class SetPredicate;

template <class T>
class Set : public GameData {
public:
    Set();
    Set(T array[]);
    Set(const Set& orig);
    virtual ~Set();
    
    void AddObject(T obj);
    void DeleteObject();
    void AddPredicate(SetPredicate<T> pred);
    
    Set GetPredicateSet();
    bool operator ==(const Set& b);
    Set operator +(const Set& b); // equivalent to a Concatenation.
    Set operator |(const Set& b); // equivalent to a Union
    Set operator &(const Set& b); // equivalent to an Intersect
    Set operator -(const Set& b); // equivalent to a Set Minus
    
    void Save();
private:
    T* objs;
    std::vector<SetPredicate<T> > predicates;
};

#endif	/* SET_H */

