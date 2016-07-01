/*
 * File:   SetTestClass.cpp
 * Author: Andrew
 *
 * Created on Jun 25, 2016, 12:42:35 AM
 */

#include "SetTestClass.h"
#include "Set.h"


CPPUNIT_TEST_SUITE_REGISTRATION(SetTestClass);

SetTestClass::SetTestClass() {
}

SetTestClass::~SetTestClass() {
}

void SetTestClass::setUp() {
    // add data to sets A and B.
}

void SetTestClass::tearDown() {
}

void SetTestClass::testMethod() {
    Set unionSet;
    Set intersectSet;
    Set addSet;
    Set minusSet;
    
    // test operators
    Set c = a + b;
    CPPUNIT_ASSERT(addSet == c);
    c = a & b;
    CPPUNIT_ASSERT(intersectSet == c);
    c = a | b;
    CPPUNIT_ASSERT(unionSet == c);
    c = a - b;
    CPPUNIT_ASSERT(minusSet == c);
}

