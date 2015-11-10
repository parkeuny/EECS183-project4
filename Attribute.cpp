/**
 * Attribute.cpp
 *
 * Jaeyoung Choi
 * jnizzler@umich.edu
 *
 * EECS 183: Project 4
 *
 * Attribute 11/9 Edit
 */

#include "Attribute.h"


Attribute::Attribute() {
    index = 0;
    points = 0;
}


int Attribute::getValueWithinRange(int value) {
    if (value >= 0) {
        if (value < MAX_NUM_ATTRIBUTES) {
            return value;
        }
        else if (value > MAX_NUM_ATTRIBUTES - 1) {
            return MAX_NUM_ATTRIBUTES - 1;
        }
    }
    return 0;
}


Attribute::Attribute(int inIndex, int inPoints) {
    index = getValueWithinRange(inIndex);
    points = inPoints;
}


int Attribute::getIndex()  {
    return index;
}


int Attribute::getPoints()  {
    return points;
}


void Attribute::setIndex(int inIndex) {
    index = getValueWithinRange(inIndex);
}


void Attribute::setPoints(int inPoints) {
    points = inPoints;
}


void Attribute::read(istream &ins) {
    ins >> index;
    ins >> points;
    index = getValueWithinRange(index);
}


void Attribute::write(ostream &outs)  {
    outs << index;
    outs << points;
}
