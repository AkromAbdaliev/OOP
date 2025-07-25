#ifndef STUDENT_H
#define STUDENT_H
#include <string> // for using std::string
#include <exception>

class Student{
private:
    std::string fullName;
protected:
    int studentNumber;
public:
    Student();
    Student(const std::string&, int);
    void setFullName(const std::string&);
    void setStudentNumber(int);
    std::string getFullName() const;
    int getStudentNumber() const;
    virtual void printStudentInfo() const;
    virtual ~Student() = default;
};
#endif
