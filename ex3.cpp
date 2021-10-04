#include "./ClassRoll.h"
/**
 * Name: Lauren Smith 
 * Class:  COMP 333
 * filename: ex3.cpp
 * Description:
 * write the client code file for the class ClassRoll 
*/
int main()
{
    ClassRoll newClass = ClassRoll("student.dat",10);
    cout<<"Number of students: "<<newClass.getNoStudents()<<endl;
}