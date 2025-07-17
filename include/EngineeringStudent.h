#ifndef ENGINEERINGSTUDENT_H
#define ENGINEERINGSTUDENT_H

#include "Student.h"

class EngineeringStudent : public Student{
private:
    std::string department;
public:
    EngineeringStudent();
    EngineeringStudent(const std::string&, int, const std::string&);
    void setDepartment(const std::string&);
    std::string getDepartment() const;
    void printStudentInfo() const override;
};
#endif
