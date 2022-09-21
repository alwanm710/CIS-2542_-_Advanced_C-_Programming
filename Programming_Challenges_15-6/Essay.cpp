// Programming Challenges 15-6 (Essay.cpp)
// By Mohammad Alwan

#include <iostream>
#include <iomanip>
#include "Essay.h"

using namespace std;

Essay::Essay() : GradedActivity()
{}

Essay::Essay(int Total, int Grammar, int Spelling, int CorrectLength, int Content, int Score) : GradedActivity(int Score)
{}
