/* 
 * File:   SetPredicate.h
 * Author: Andrew
 *
 * Created on June 26, 2016, 6:37 PM
 */

#ifndef SETPREDICATE_H
#define	SETPREDICATE_H

#include <vector>

template <class T>
class Set;

enum Operator {
    EQUALS = 1,
    LESS,
    GREATER,
    LESS_EQUAL,
    GREATER_EQUAL,
    UNEQUAL
};

enum PredicateJoinMode {
    AND, // uses intersects
    OR, // uses unions
    XOR // uses minus
};

template <class T>
class SetPredicate {
public:
    SetPredicate(PredicateJoinMode mode, Operator op, T value);
    virtual ~SetPredicate();
    
    Set<T> GetResultSet();
    friend class Set<T>;
private:
    void UpdateResult(); // invoked by a set object when a value is added or deleted.
    PredicateJoinMode joinMode;
    Operator o;
    T val;
    Set<T> result;
};

#endif	/* SETPREDICATE_H */

