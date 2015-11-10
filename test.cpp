/**
 * test.cpp
 *
 * EECS 183, Fall 2015
 * Project 4: EECS Harmony Test Suite
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#A description of the project here#>
 */

#include <iostream>
#include "Personality.h"
#include "Question.h"
#include "Answer.h"
#include "Attribute.h"

void test_Attribute_construct_default();


void test_Attribute_construct_2param();


void test_Attribute_setIndex();

/**
 * Declare more test functions here
 * It is a good idea to test all constructors
 * It is a good idea to test all member functions that modify member variables
 * It is a good idea to test read() and write()
 */

int main() {
    //test_Attribute_construct_default();
    //test_Attribute_construct_2param();
    //test_Attribute_setIndex();

    return 0;
}


void test_Attribute_construct_default() {
    Attribute att;

    if (att.getIndex() != 0) {
        cout << "bug in Attribute default constructor" << endl;
    }

    if (att.getPoints() != 0) {
        cout << "bug in Attribute default constructor" << endl;
    }
}


void test_Attribute_construct_2param() {
    // Test good values
    Attribute att1(4, 5);
    if (att1.getIndex() != 4) {
        cout << "bug in Attribute non-default constructor" << endl;
    }

    if (att1.getPoints() != 5) {
        cout << "bug in Attribute non-default constructor" << endl;
    }

    // Test invalid index, low
    Attribute att2(-1, 5);
    if (att2.getIndex() != 0) {
        cout << "bug in Attribute non-default constructor" << endl;
    }

    if (att2.getPoints() != 5) {
        cout << "bug in Attribute non-default constructor" << endl;
    }

    // Test invalid index, high
    Attribute att3(MAX_NUM_ATTRIBUTES, 5);
    if (att3.getIndex() != (MAX_NUM_ATTRIBUTES - 1)) {
        cout << "bug in Attribute non-default constructor" << endl;
    }

    if (att3.getPoints() != 5) {
        cout << "bug in Attribute non-default constructor" << endl;
    }
}

void test_Attribute_setIndex() {
    Attribute att(4, 5);

    att.setIndex(0);
    if (att.getIndex() != 0) {
        cout << "bug in Attribute::setIndex()" << endl;
    }

    if (att.getPoints() != 5) {
        cout << "bug in Attribute::setIndex()" << endl;
    }

    // Test invalid index, low
    att.setIndex(-1);
    if (att.getIndex() != 0) {
        cout << "bug in Attribute::setIndex()" << endl;
    }

    if (att.getPoints() != 5) {
        cout << "bug in Attribute::setIndex()" << endl;
    }

    // Test invalid index, high
    att.setIndex(MAX_NUM_ATTRIBUTES);
    if (att.getIndex() != (MAX_NUM_ATTRIBUTES - 1)) {
        cout << "bug in Attribute::setIndex()" << endl;
    }

    if (att.getPoints() != 5) {
        cout << "bug in Attribute::setIndex()" << endl;
    }
}


// define more test functions here





