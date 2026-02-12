#include "student.h"
#include <iostream>
using namespace std;

Student::Student(string n, int a)
{
    name = n;
    age = a;
}

void Student::setAge(int studentAge)
{
    age = studentAge;
}

void Student::setName(string studentName)
{
    name = studentName;
}

string Student::getName()
{
    return name;
}

int Student::getAge()
{
    return age;
}

void Student::printStudentInfo()
{
    cout << "Student " << name << " Age " << age << endl;
}


