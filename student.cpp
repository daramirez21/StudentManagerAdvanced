#include "student.h"
#include <string>
#include <iostream>

using namespace std;
     
    student::student()
    {
    grade = 0;
    }   

    void student::setName(string name1, string name2)
            {   
             first = name1;
             last = name2;
            }   

    string student::fullName()
            {
             string name = first;
             name.append(" ");
             name.append(last);
             return name;
            }
    void student::addGrade(double grades)
            {
            gradeL.push_back(grades);
            }

    double student::getScore()
    {   
    double total = 0.0;
    double sum = 0.0; 

        for(int i = 0; i < gradeL.size(); i++)
        {
        sum = sum + gradeL[i];
        total = sum / gradeL.size();
        }
    return total;
    }
