#include "EngineeringStudent.h"
#include <iostream>

EngineeringStudent::EngineeringStudent(){}
EngineeringStudent::EngineeringStudent(const string& fname, int snumber, const string& department)
    : Student(fname, snumber),department(department){}

void EngineeringStudent::setDepartment(const std::string& department)
{
    this->department = department;
}

std::string EngineeringStudent::getDepartment() const
{
    return this->department;
}

void EngineeringStudent::printStudentInfo() const override
{
    std::cout << "Department: " << this->department << std::endl
              << Student::printStudentInfo();
}
