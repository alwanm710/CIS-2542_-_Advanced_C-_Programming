// Programming Challenges 15-6 (GradedActivity.h)
// By Mohammad Alwan

#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H
#include <string>

using namespace std;

class GradedActivity{
    
protected:
    int Score;
    
public:
    GradedActivity()
        {  Score = 0; }
    
    GradedActivity(int total)
        {  Score = total;}
    
    void setGradedActivity (int total)
        {  Score = total;  }
    
    void setLetterGrade (int total)
        {  Score = total;  }

    int getGradedActivity ()
        {  return Score;  }
    
    char getLetterGrade() const;
    
};
#endif
