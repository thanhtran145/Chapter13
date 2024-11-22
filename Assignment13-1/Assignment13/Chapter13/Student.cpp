#include"Student.h"

//Default Constructor
Student::Student() :studentID(0), name(""), major(""), gpa(0) {}

//Precondition: positive integer
//Postcondition: Sets studentID
void Student::setStudentID(int newID) {
	studentID = newID;
}
//Precondition: NA
//Postcondition: returns student ID
int Student::getStudentID() const {
	return studentID;
}
//Precondition: a string
//Postcondition: sets name
void Student::setName(string newName) {
	name = newName;
}
//Precondition: NA
//Postcondition: returns name
string Student::getName() const {
	return name;
}
//Precondition: a string
//Postcondition: sets major
void Student::setMajor(string newMajor) {
	major = newMajor;
}
//Precondition: NA
//Postcondition: returns major
string Student::getMajor() const {
	return major;
}
//Precondition: a double
//Postcondition: sets GPA
void Student::setGPA(double newGPA) {
	gpa = newGPA;
}
//Precondition: NA
//Postcondition: returns GPA
double Student::getGPA() const {
	return gpa;
}
//Precondition: ostream object and a student object
//Postcondition: returns output
ostream& operator <<(ostream& outs, const Student& obj) {
	outs <<"\t\t"<< setw(4) << obj.studentID << setw(20) << obj.name << setw(20) << obj.major << setw(6) << obj.gpa;
	return outs;
}

