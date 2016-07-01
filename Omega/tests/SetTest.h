/*
 * File:   SetTest.h
 * Author: Andrew
 *
 * Created on Jun 25, 2016, 1:15:24 AM
 */

#ifndef SETTEST_H
#define	SETTEST_H

#include <cppunit/extensions/HelperMacros.h>

class SetTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(SetTest);

    CPPUNIT_TEST(testAddObject);
    CPPUNIT_TEST(testDeleteObject);
    CPPUNIT_TEST(testSet);
    CPPUNIT_TEST(testSet2);
    CPPUNIT_TEST(testSet3);

    CPPUNIT_TEST_SUITE_END();

public:
    SetTest();
    virtual ~SetTest();
    void setUp();
    void tearDown();

private:
    void testAddObject();
    void testDeleteObject();
    void testSet();
    void testSet2();
    void testSet3();

};

#endif	/* SETTEST_H */

