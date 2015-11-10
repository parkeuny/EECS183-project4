/**
 * Answer.cpp
 *
 * Jaeyoung Choi
 * jnizzler@umich.edu
 *
 * EECS 183: Project 4
 *
 * Answer 11/9 Edit
 */

#include "Answer.h"

Answer::Answer() {
    Attribute();
    text = "";
}

// TODO: getAttribute, setAttribute, getText, setText
Attribute Answer::getAttribute() {
    return Attribute();
}

void Answer::setAttribute(Attribute &inAttribute) {
    inAttribute = inAttribute;
}

string Answer::getText() {
    return text;
}

void Answer::setText(string inputText) {
    text = inputText;
}

void Answer::read(istream &ins) {
    getline(ins, text);
}


void Answer::write(ostream &outs) {
    outs << text;
}
