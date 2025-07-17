#include "Student.h"
#include <iostream>

Student::Student(){}
Studen::Student(const std::string& fname, int snumber) : fullName(fname), studentNumber(snumber){}

void Student::setFullName(const std::string& fname){ this->fullName = fname; }

void Student::setStudentNumber(int snumber){ this->studentNumber = snumber; }

std::string Student::getFullName() const { return this->fullName; }

int Student::getStudentNumber() const { return this->studentNumber; }

void Student::printStudentInfo() const
{
    std::cout << "Student Name: " << this->fullName << "\nStudent Number: "
              << this->studentNumber << std::endl << std::endl;
}
