// Programming Challenges 15-6 (Essay.h)
// By Mohammad Alwan

#ifndef ESSAY_H
#define ESSAY_H
#include "GradedActivity.h"
#include <string>

using namespace std;

class Essay{
    
private:
    int Total;
    int Grammar;
    int Spelling;
    int CorrectLength;
    int Content;
    
public:
    
    Essay()
        {  Total = 0; Grammar = 0; Spelling = 0; CorrectLength = 0; Content = 0;}
    
    Essay(int grammar,int spelling,int correctLength,int content)
        {  Grammar = grammar; Spelling = spelling; CorrectLength = correctLength; Content = content;}
    
    void setTotal ()
    {  Total = Grammar + Spelling + CorrectLength + Content; }
    
    
    int getTotal ()
    {  return Total;  }
    int getGrammar ()
    {  return Grammar;  }
    int getSpelling ()
    {  return Spelling;  }
    int getCorrectLength ()
    {  return CorrectLength;  }
    int getContent ()
    {  return Content;  }

};
#endif