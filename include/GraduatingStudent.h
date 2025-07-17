#ifndef GRADUATINGSTUDENT_H
#define GRADUATINGSTUDENT_H
#include "EngineeringStudent.h"
class GraduatingStudent : protected EngineeringStudent{
private:
    std::string certificate;
public:
    GraduatingStudent(const std::string&, int, const std::string&, const std::string&);
    void setCertificate(const std::string&);
    std::string getCertificate() const;
    void printStudentInfo() const override;
};
#endif
