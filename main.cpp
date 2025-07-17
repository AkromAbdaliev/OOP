#include "Student.h"
#include "EngineeringStudent.h"
#include "GraduatingStudent.h"
#include<iostream>
#include <exception>

using std::cout;
using std::string;
using std::endl;

int main(){
    Student student1;
    student1.setFullName("Jack Black");
    student1.setStudentNumber(2221133);
    student1.printStudentInfo();

    EngineeringStudent engineer;
    engineer.setFullName("Marie Smith");
    engineer.setDepartment("Electrical");
    engineer.setStudentNumber(2221111);
    engineer.printStudentInfo();

    EngineeringStudent engineer1("Jane Smith", 2229999 ,"Computer");
    engineer1.printStudentInfo();

    GraduatingStudent graduate("Dior Homme", 2112211 ,"Software", "AA10101011");
    graduate.printStudentInfo();


    return 0;
}
