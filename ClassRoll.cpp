#include <fstream>
#include "ClassRoll.h"
/**
 * Name: Lauren Smith 
 * Class:  COMP 333
 * filename: classRoll.cpp
 * Description:
 * write the implementation file for the class ClassRoll 
*/
ClassRoll::ClassRoll(string filename,int maxStudents)
{
    if(maxStudents < 0 || maxStudents > 25)
    {
        maxStudents = 25;
    }
    ifstream fin(filename);
    if(!fin.is_open())
    {
        cout<<"Error opening data file "<<endl;
        exit(-20);
    }
    int noStudents=0;
    for (;noStudents < 25; index++)
    {
        getline(fin,ClassRoll::students[noStudents].sudentName);
        if(fin.eof())
        {
            break;
        }
        fin>>ClassRoll::students[noStudents].assignmentTotal;
        fin>>ClassRoll::students[noStudents].testTotal;
        fin>>ClassRoll::students[noStudents].letterGrade;
        fin.ignore(80,'\n');
    }
    ClassRoll::noStudents = noStudents;
}

int ClassRoll::getNoStudents()
{
    return ClassRoll::noStudents;
}
