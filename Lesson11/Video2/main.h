/*The header file for inheritance.*/

#include<iostream>
#include<string>
using namespace std;

//The base class
class Student
{
private:
	int id;
public:
	void setId(int idIn);
	int getId();
	Student();
	void setId();
};

Student::Student()
{
	id = 000000000;
}

void Student::setId(int idIn)
{

	id = idIn;
}

int Student::getId()
{
	return id;
}

//The derived class with Student as base class
class GradStudent : private Student
{
private:
	string degree;
public:
	GradStudent();
	void setDegree(string degreeIn);
	string getDegree();
	void setStudentId(int idIn);
	int getStudentId();
};

GradStudent::GradStudent()
{
	degree = "undelcared";
}

int GradStudent::getStudentId()
{
	return Student::getId();
}
void GradStudent::setStudentId(int idIn)
{
	Student::setId(idIn);
}
void GradStudent::setDegree(string degreeIn)
{
	degree = degreeIn;
}
string GradStudent::getDegree()
{
	return degree;
}
