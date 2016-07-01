/*
 * File:   SetTestClass.h
 * Author: Andrew
 *
 * Created on Jun 25, 2016, 12:42:35 AM
 */

#ifndef SETTESTCLASS_H
#define	SETTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>
#include "Set.h"

class SetTestClass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(SetTestClass);

    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    SetTestClass();
    virtual ~SetTestClass();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void testFailedMethod();
    
    Set a;
    Set b;
};

#endif	/* SETTESTCLASS_H */

