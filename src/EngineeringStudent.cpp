#include "EngineeringStudent.h"
#include <iostream>

EngineeringStudent::EngineeringStudent(){}
EngineeringStudent::EngineeringStudent(const std::string& fname, int snumber, const std::string& department)
    : Student(fname, snumber),department(department){}

void EngineeringStudent::setDepartment(const std::string& department)
{
    this->department = department;
}

std::string EngineeringStudent::getDepartment() const
{
    return this->department;
}

void EngineeringStudent::printStudentInfo() const
{
    std::cout << "Department: " << this->department << std::endl;
    Student::printStudentInfo();
}
