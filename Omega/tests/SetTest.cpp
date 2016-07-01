/*
 * File:   SetTest.cpp
 * Author: Andrew
 *
 * Created on Jun 25, 2016, 1:15:24 AM
 */

#include "SetTest.h"
#include "Set.h"


CPPUNIT_TEST_SUITE_REGISTRATION(SetTest);

SetTest::SetTest() {
}

SetTest::~SetTest() {
}

void SetTest::setUp() {
}

void SetTest::tearDown() {
}

void SetTest::testAddObject() {
    T obj;
    Set set;
    set.AddObject(obj);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void SetTest::testDeleteObject() {
    Set set;
    set.DeleteObject();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void SetTest::testSet() {
    Set set();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void SetTest::testSet2() {
    T* array;
    Set set(array);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void SetTest::testSet3() {
    const Set& orig;
    Set set(orig);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

