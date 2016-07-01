/* 
 * File:   SetPredicate.cpp
 * Author: Andrew
 * 
 * Created on June 26, 2016, 6:37 PM
 */

#include "SetPredicate.h"
#include "Set.h"

template <class T>
SetPredicate<T>::SetPredicate(PredicateJoinMode mode, Operator op, T value) {
    joinMode = mode;
    o = op;
    val = value;
}

template <class T>
SetPredicate<T>::~SetPredicate() {
}

template <class T>
Set<T> SetPredicate<T>::GetResultSet()
{
    return result;
}

