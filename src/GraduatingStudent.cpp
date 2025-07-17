#include "GraduatingStudent.h"
#include <iostream>

GraduatingStudent::GraduatingStudent(const std::string& fname, int snumber, const std::string& department, std::string& certificate)
    : EngineeringStudent(fname, snumber, department), certificate(certificate){}

void GraduatingStudent::setCertificate(const std::string& certificate)
{
    this->certificate = certificate;
}

std::string GraduatingStudent::getCertificate() const
{
    return this->certificate;
}

void GraduatingStudent::printStudentInfo() const override
{
    std::cout << "Certificate: " << this->certificate << std::endl
              << EngineeringStudent::printStudentInfo();
}
