#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <string>
#include <vector> 

using namespace std;

class student   
{
        private:
                string first;
                string last;
                double grade;
                vector <double> gradeL;

        public:
                void setName(string, string);
                string fullName();
                student();
                double getScore();
                void addGrade(double);

};

#endif
