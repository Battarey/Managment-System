#include <iostream>
#include <fstream> // for work with txt files
#include <Windows.h> // for function sleep
#include <thread> // for work with multithreading
//#include <chrono>

#include <string> // converting from string to int

using namespace std;

class Student {
	string name; string surname; string secondname; string age; string dateOfBirthday;
	string courseOfStudy; string group;
	string specialization; string tutorOfStudent;

	string scholarship; // придумать систему, при которой начисляется стипендия
							// изначально в string импортировать из файла, с помощью stoi переделывать в int и обратно в string
public:
	void setName(string name) { this->name = name; } string getName() { return this->name; }
	void setSurname(string surName) { this->surname = surName; } string getSurname() { return this->surname; }
	void setSecondname(string secondName) { this->secondname = secondName; } string getSecondname() { return this->secondname; }
	void setAge(string age) { this->age = age; } string getAge() { return this->age; }
	void setDateOfBirthday(string dateOfBirthday) { this->dateOfBirthday = dateOfBirthday; } string getDateOfBirthday() { return this->dateOfBirthday; }
	void setCourseOfStudy(string courseOfStudy) { this->courseOfStudy = courseOfStudy; } string getCourseOfStudy() { return this->courseOfStudy; }
	void setGroup(string group) { this->group = group; } string getGroup() { return this->group; }
	void setSpecialization(string spec) { this->specialization = spec; } string getSpecialization() { return this->specialization; }
	void setTutorOfStudent(string tutorOfStudent) { this->tutorOfStudent = tutorOfStudent; } string getTutorOfStudent() { return this->tutorOfStudent; }
	void setScholarship(string scholarship) { this->scholarship = scholarship; } string getScholarship() { return this->scholarship; }
};

class Teacher {
	string name; string surname; string secondname; string age;

	string specialization; 
	string lecturesHeld; // проведённые
	string lecturesUnprowen; // не проведённые

	string vacation; // находится ли в отпуске препод

	string salary; // придумать систему, при которой учителю начисляется +к ЗП за то или иное действие ->
						//изначально в string импортировать из файла, с помощью stoi переделывать в int и обратно в string
public:
	void setName(string name) { this->name = name; } string getName() { return this->name; }
	void setSurname(string surName) { this->surname = surName; } string getSurname() { return this->surname; }
	void setSecondname(string secondName) { this->secondname = secondName; } string getSecondname() { return this->secondname; }
	void setAge(string age) { this->age = age; } string getAge() { return this->age; }
	void setLecturesHeld(string lecturesHeld) { this->lecturesHeld = lecturesHeld; } string getLecturesHeld() { return this->lecturesHeld; }
	void setLecturesUnprowen(string lecturesUnprowen) { this->lecturesUnprowen = lecturesUnprowen; } string getLecturesUnprowen() { return this->lecturesUnprowen; }
	void setVacation(string vacation) { this->vacation = vacation; } string getVacation() { return this->vacation; }
	void setSalary(string salary) { this->salary = salary; } string getSalary() { return this->salary; }
	void setSpecialization(string specialization) { this->specialization = specialization; } string getSpecialization() { return this->specialization; }
};

// Technical functions
void logo();
void exit();
void clearingScreen();
void clearingScreenWithSleep();
void inicialization(bool teachConnect, string refLogin);

// General functions
bool authorization();
bool listoOfTeachers();
void informationAboutGroup(); // work

// Functionality for the student
void mainMenuStudent();
void firstAuthorizationStudent(string refLogin);
void informationAboutStudent(bool dirConnect);
void classSchedule(); 

// Functionality for the teacher
void mainMenuTeacher();
void firstAuthorizationTeacher(string refLogin);
void informationAboutTeacher(bool dirConnect);
void listCuratorGroup(); // work

// Functions for director
void mainMenuDirector();
void calculatingTheSalary();
void informationAboutChoise();
void informationAboutStudent_DIR();
void informationAboutTeacher_DIR();
