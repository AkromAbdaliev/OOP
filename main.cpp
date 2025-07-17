#include<iostream>

using std::cout;
using std::string;
using std::endl;

class Student{ // base class
private: // encapsulation data hiding
    string fullName;

protected:
    int studentNumber;

public:
    Student(){}
    Student(string fname, int snumber):
        fullName(fname),studentNumber(snumber){}

    void setFullName(const string& fname)
    {
        this->fullName = fname;
    }

    void setStudentNumber(int snumber)
    {
        this->studentNumber = snumber;
    }

    string getFullName() const {return this->fullName;}
    int getStudentNumber() const {return this->studentNumber;}

    virtual void printStudentInfo() // for polymorphism
    {
        cout << "Student Name: " << this->fullName << "\nStudent Number: "
             << this->studentNumber << endl <<endl;
    }

};

class EngineeringStudent : public Student{ // Public inheritance
private:
    string department;
public:
    EngineeringStudent(){}
    EngineeringStudent(string fname, string department, int snumber)
        :Student(fname, snumber), department(department){}

    void setDepartment(const string& department)
    {
        this->department = department;
    }

    string getDepartment() const {return this->department;}

    void printStudentInfo() override // polymorphism
    {
        cout << "Full Name: " << this->getFullName() << "\nDepartment: "
             <<this->department << "\nStudent Number: "
             << this->getStudentNumber() << endl <<endl;
    }

};

class GraduatingStudent : protected EngineeringStudent // pprotected iinheritence
{
private:
    string certificate;

public:
    GraduatingStudent(string sname, string department, string certificate, int snumber)
        : EngineeringStudent(sname, department, snumber), certificate(certificate){}

    void setCertificate(const string& certificate)
    {
        this->certificate = certificate;
    }

    string getCertificate() const {return this->certificate;}

    void printStudentInfo() override
    {
        cout << "Full Name: " << this->getFullName() << "\nDepartment: "
             <<this->getDepartment() << "\nStudent Number: "
             << this->getStudentNumber()<< "\nCertificate: "<< this->certificate<< endl <<endl;
    }
};



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

    EngineeringStudent engineer1("Jane Smith", "Computer", 2229999);
    engineer1.printStudentInfo();

    GraduatingStudent graduate("Dior Homme", "Software", "AA10101011", 2112211);
    graduate.printStudentInfo();


    return 0;
}
