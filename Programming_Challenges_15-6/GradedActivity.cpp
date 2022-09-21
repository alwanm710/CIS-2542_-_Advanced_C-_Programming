// Programming Challenges 15-6 (GradedActivity.cpp)
// By Mohammad Alwan

#include "GradedActivity.h"

char GradedActivity :: getLetterGrade() const{
    char LetterGrade;
    
    if (Score > 89)
        LetterGrade = 'A';
    else if (Score > 79)
        LetterGrade = 'B';
    else if (Score > 69)
        LetterGrade = 'C';
    else if (Score > 59)
        LetterGrade = 'D';
    else
        LetterGrade = 'F';
        
    return LetterGrade;
}

