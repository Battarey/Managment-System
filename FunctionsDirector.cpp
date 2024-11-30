#include "Functions.h"

void mainMenuDirector() {
	string choiseDir;

	cout << "Welcome to the system, director!" << endl;
	cout << "Functionality: " << endl;
	cout << "1 - information output" << endl;

	cout << "Your choise: "; cin >> choiseDir;
	if (choiseDir == "1") { clearingScreen(); logo(); informationAboutChoise(); }
	else { cout << "Incorrect input! Try again!"; clearingScreenWithSleep(); logo(); mainMenuDirector(); }
}

void informationAboutChoise() {
	string choiseDir;

	cout << "If you want to find out information about the student, press 1, if the teacher - 2: "; cin >> choiseDir;
	if (choiseDir == "1") { clearingScreen(); logo(); informationAboutStudent_DIR(); }
	else if (choiseDir == "2") { clearingScreen(); logo(); informationAboutTeacher_DIR(); }
	else { cout << "Incorrect input! Try again!"; clearingScreenWithSleep(); logo(); informationAboutChoise(); }
}

void informationAboutStudent_DIR() {
	ifstream finStudent;
	Student stDir;

	string loginStudent; string buffer; string strFind; bool dirConnect = true; bool sucsesfulLogin = false;
	string path = "DataBase\\InfoAbout\\InfoAllStudents.txt";

	cout << "Input login student: "; cin >> loginStudent;

	finStudent.open(path);
	if (finStudent.is_open()) {
		while (!finStudent.eof()) {
			finStudent >> buffer;
			if (loginStudent == buffer) { system("CLS"); sucsesfulLogin = true; firstAuthorizationStudent(buffer); informationAboutStudent(dirConnect); }
			else { for (char i = 0; i < 20; i++) { finStudent >> buffer; } }
		}
	}
	finStudent.close(); 

	if (sucsesfulLogin == false) { cout << "Not correct input! Try again!"; clearingScreenWithSleep(); logo(); informationAboutStudent_DIR(); }
}

void informationAboutTeacher_DIR() {
	ifstream finTeacher;
	Teacher thDir;

	string loginStudent; string buffer; string strFind; bool dirConnect = true; bool sucsesfulLogin = false;
	string path = "DataBase\\InfoAbout\\InfoAllTeachers.txt";

	cout << "Input login teacher: "; cin >> loginStudent;

	finTeacher.open(path);
	if (finTeacher.is_open()) {
		while (!finTeacher.eof()) {
			finTeacher >> buffer;
			if (loginStudent == buffer) { system("CLS"); sucsesfulLogin = true; inicialization(true, buffer); informationAboutStudent(dirConnect); }
			else { for (char i = 0; i < 20; i++) { finTeacher >> buffer; } }
		}
	}
	finTeacher.close();

	if (sucsesfulLogin == false) { cout << "Not correct input! Try again!"; clearingScreenWithSleep(); logo(); informationAboutTeacher_DIR(); }
}
