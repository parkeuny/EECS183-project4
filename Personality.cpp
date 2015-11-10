/**
 * Personality.cpp
 *
 * Jaeyoung Choi
 * jnizzler@umich.edu
 *
 * EECS 183: Project 4
 *
 * Personality 11/9 Edit
 */


#include <iostream>

#include "Personality.h"


// TODO: implement reset, constructor, adjustPersonality
void Personality::reset() {
    for (int i = 0; i < MAX_NUM_ATTRIBUTES; i++) {
        points[i] = DEFAULT_POINTS;
    }
}

Personality::Personality() {
    reset();
}

void Personality::adjustPersonality(Attribute &inAttribute) {
    int attIndex = 0;
    int attPoints = 0;
    int newPoints = 0;

    attIndex = inAttribute.getIndex();
    attPoints = inAttribute.getPoints();
    newPoints = attPoints + points[attIndex];

    if (newPoints < MIN_POINTS) {
        points[attIndex] = MIN_POINTS;
    }
    else if (newPoints > MAX_POINTS) {
        points[attIndex] = MAX_POINTS;
    }
}

void Personality::write(ostream &outs) {
    cout << "Your EECS Harmony Personality Profile" << endl;
    for (int i = 0; i < MAX_NUM_ATTRIBUTES; i++) {
        cout << "   " << ATTRIBUTE_NAMES[i] << ": " << points[i] << endl;
    }
}
