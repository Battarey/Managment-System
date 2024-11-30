#include "Functions.h"

ifstream finStudent;
Student st;

void firstAuthorizationStudent(string refLogin) {
	string name; string surName; string secondName; string dateOfBirthday; string age; 
	string courseOfStudy; string specialization; string tutorOfStudent; string scholarship; string group;    

	string pathStudent = "DataBase\\InfoAbout\\InfoAllStudents.txt"; string studentStrFind;

	finStudent.open(pathStudent);
	if (finStudent.is_open()) {
		while (!finStudent.eof()) {
			finStudent >> studentStrFind;
			if (refLogin == studentStrFind) {
				for (char i = 0; i < 2; i++) { finStudent >> studentStrFind; name = studentStrFind; } st.setName(name);
				for (char i = 0; i < 2; i++) { finStudent >> studentStrFind; surName = studentStrFind; } st.setSurname(surName);
				for (char i = 0; i < 2; i++) { finStudent >> studentStrFind; secondName = studentStrFind; } st.setSecondname(secondName);
				for (char i = 0; i < 2; i++) { finStudent >> studentStrFind; dateOfBirthday = studentStrFind; } st.setDateOfBirthday(dateOfBirthday);
				for (char i = 0; i < 2; i++) { finStudent >> studentStrFind; age = studentStrFind; } st.setAge(age);
				for (char i = 0; i < 2; i++) { finStudent >> studentStrFind; courseOfStudy = studentStrFind; } st.setCourseOfStudy(courseOfStudy);
				for (char i = 0; i < 2; i++) { finStudent >> studentStrFind; specialization = studentStrFind; } st.setSpecialization(specialization);
				for (char i = 0; i < 2; i++) { finStudent >> studentStrFind; tutorOfStudent = studentStrFind; } st.setTutorOfStudent(tutorOfStudent);
				for (char i = 0; i < 2; i++) { finStudent >> studentStrFind; scholarship = studentStrFind; } st.setScholarship(scholarship);
				for (char i = 0; i < 2; i++) { finStudent >> studentStrFind; group = studentStrFind; } st.setGroup(group);
				finStudent.close();
			}
		}
	} else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); authorization(); }
	finStudent.close();
}

void informationAboutStudent(bool dirConnect) {
	string choiseStudent; 

	cout << "Information about student:" << endl;
	cout << "Name: " << st.getName() << endl;
	cout << "Surname: " << st.getSurname() << endl;
	cout << "Secondname: " << st.getSecondname() << endl;
	cout << "Date of birth: " << st.getDateOfBirthday() << endl;
	cout << "Age: " << st.getAge() << endl;
	cout << "Course of study: " << st.getCourseOfStudy() << endl;
	cout << "Specialization of student: " << st.getSpecialization() << endl;
	cout << "Tutor of student: " << st.getTutorOfStudent() << endl;
	cout << "Scholarship: " << st.getScholarship() << endl;
	cout << "Group of student: " << st.getGroup() << endl << endl;
	cout << "Enter 1 to go to the menu, or 2 go to exit: "; cin >> choiseStudent; 
	if (choiseStudent == "1" && dirConnect == false) { clearingScreen(); logo(); mainMenuStudent(); }
	else if (choiseStudent == "1" && dirConnect == true) { clearingScreen(); logo(); mainMenuDirector(); }
	else if (choiseStudent == "2") { exit(); }
	else if (choiseStudent != "1" && choiseStudent != "2" && dirConnect == true) { cout << "Not correct input! Redirecting you to the menu..."; clearingScreen(); logo(); mainMenuDirector(); }
	else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreen(); logo(); mainMenuStudent(); }
}

void mainMenuStudent() {
	string chosieStudent;

	cout << "Welcome to the system, " << st.getName() << "!" << endl;
	cout << "Functionality: " << endl;
	cout << "1 - Information about student" << endl;
	cout << "2 - Class Schedule" << endl;
	cout << "3 - List of teachers" << endl;
	cout << "Your choise: "; cin >> chosieStudent;
	if (chosieStudent == "1") { clearingScreen(); logo(); informationAboutStudent(false); }
	else if (chosieStudent == "2") { clearingScreen(); logo(); classSchedule(); }
	else if (chosieStudent == "3") { clearingScreen(); logo(); bool result = listoOfTeachers();
		if (result == true) { clearingScreen(); logo(); mainMenuStudent(); }
	}
	else { cout << "Incorrect input! Try again!"; clearingScreenWithSleep(); logo(); classSchedule(); }
}

void classSchedule() {
	string path; string strFind;
	string choiseStudentSchedule;
	char count = 0; string studentChoise;

	cout << "To display your schedule, press 1, to select a course and a group, press 2: "; cin >> choiseStudentSchedule;
	if (choiseStudentSchedule == "1") {
		string groupOfStudent = st.getGroup(); string courseOfStudyStudent = st.getCourseOfStudy();
		
		if (courseOfStudyStudent == "1") {
			if (groupOfStudent == "09.02.07") { 
				path = "DataBase\\ClassSchedule\\FirstCourse\\09-02-07.txt";

				cout << "The order of the schedule output: " << endl;
				cout << "Day of week - First - Second - Third - Fourth - Fiveth" << endl;
				cout << "None - the absence of a couple" << endl << endl;
				finStudent.open(path);
				if (finStudent.is_open()) {
					while (!finStudent.eof()) {
						count++;
						finStudent >> strFind;
						cout << strFind << " ";
						if (count == 11) { cout << endl; count = 0; }
					}
					finStudent.close();
					cout << "Enter 1 go to menu, 2 to exit from programm: "; cin >> studentChoise;
					if (studentChoise == "1") { clearingScreen(); logo(); mainMenuStudent(); }
					else if (studentChoise == "2") { exit(); }
					else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
				}
				else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); mainMenuStudent(); }
			}
			else if (groupOfStudent == "09.02.06") { 
				path = "DataBase\\ClassSchedule\\FirstCourse\\09-02-06.txt";

				cout << "The order of the schedule output: " << endl;
				cout << "Day of week - First - Second - Third - Fourth - Fiveth" << endl;
				cout << "None - the absence of a couple" << endl << endl;
				finStudent.open(path);
				if (finStudent.is_open()) {
					while (!finStudent.eof()) {
						count++;
						finStudent >> strFind;
						cout << strFind << " ";
						if (count == 11) { cout << endl; count = 0; }
					}
					finStudent.close();
					cout << "Enter 1 go to menu, 2 to exit from programm: "; cin >> studentChoise;
					if (studentChoise == "1") { clearingScreen(); logo(); mainMenuStudent(); } 
					else if (studentChoise == "2") { exit(); }
					else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
				} else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); mainMenuStudent(); }
			} 
			else { cout << "Unknown error! Try again!"; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
		}
		else if (courseOfStudyStudent == "2") {
			if (groupOfStudent == "09.02.07") {
				path = "DataBase\\ClassSchedule\\SecondCourse\\09-02-07.txt";

				cout << "The order of the schedule output: " << endl;
				cout << "Day of week - First - Second - Third - Fourth - Fiveth" << endl;
				cout << "None - the absence of a couple" << endl << endl;
				finStudent.open(path);
				if (finStudent.is_open()) {
					while (!finStudent.eof()) {
						count++;
						finStudent >> strFind;
						cout << strFind << " ";
						if (count == 11) { cout << endl; count = 0; }
					}
					finStudent.close();
					cout << "Enter 1 go to menu, 2 to exit from programm: "; cin >> studentChoise;
					if (studentChoise == "1") { clearingScreen(); logo(); mainMenuStudent(); }
					else if (studentChoise == "2") { exit(); }
					else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
				}
				else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); mainMenuStudent(); }
			}
			else if (groupOfStudent == "09.02.06") {
				path = "DataBase\\ClassSchedule\\SecondCourse\\09-02-06.txt";

				cout << "The order of the schedule output: " << endl;
				cout << "Day of week - First - Second - Third - Fourth - Fiveth" << endl;
				cout << "None - the absence of a couple" << endl << endl;
				finStudent.open(path);
				if (finStudent.is_open()) {
					while (!finStudent.eof()) {
						count++;
						finStudent >> strFind;
						cout << strFind << " ";
						if (count == 11) { cout << endl; count = 0; }
					}
					finStudent.close();
					cout << "Enter 1 go to menu, 2 to exit from programm: "; cin >> studentChoise;
					if (studentChoise == "1") { clearingScreen(); logo(); mainMenuStudent(); }
					else if (studentChoise == "2") { exit(); }
					else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
				}
				else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); mainMenuStudent(); }
			} 
			else { cout << "Unknown error! Try again!"; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
		}
		else if (courseOfStudyStudent == "3") { 
			if (groupOfStudent == "09.02.07") {
				path = "DataBase\\ClassSchedule\\ThirdCourse\\09-02-07.txt";

				cout << "The order of the schedule output: " << endl;
				cout << "Day of week - First - Second - Third - Fourth - Fiveth" << endl;
				cout << "None - the absence of a couple" << endl << endl;
				finStudent.open(path);
				if (finStudent.is_open()) {
					while (!finStudent.eof()) {
						count++;
						finStudent >> strFind;
						cout << strFind << " ";
						if (count == 11) { cout << endl; count = 0; }
					}
					finStudent.close();
					cout << "Enter 1 go to menu, 2 to exit from programm: "; cin >> studentChoise;
					if (studentChoise == "1") { clearingScreen(); logo(); mainMenuStudent(); }
					else if (studentChoise == "2") { exit(); }
					else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
				}
				else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); mainMenuStudent(); }
			}
			else if (groupOfStudent == "09.02.06") {
				path = "DataBase\\ClassSchedule\\ThirdCourse\\09-02-06.txt";

				cout << "The order of the schedule output: " << endl;
				cout << "Day of week - First - Second - Third - Fourth - Fiveth" << endl;
				cout << "None - the absence of a couple" << endl << endl;
				finStudent.open(path);
				if (finStudent.is_open()) {
					while (!finStudent.eof()) {
						count++;
						finStudent >> strFind;
						cout << strFind << " ";
						if (count == 11) { cout << endl; count = 0; }
					}
					finStudent.close();
					cout << "Enter 1 go to menu, 2 to exit from programm: "; cin >> studentChoise;
					if (studentChoise == "1") { clearingScreen(); logo(); mainMenuStudent(); }
					else if (studentChoise == "2") { exit(); }
					else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
				}
				else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); mainMenuStudent(); }
			}
			else { cout << "Unknown error! Try again!"; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
		}
		else { cout << "Unknown error! Try again!"; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
	}
	else if (choiseStudentSchedule == "2") {
		string inputCourse; string inputGroup;

		cout << "Input course of group: "; cin >> inputCourse;
		if (inputCourse == "1") { 
			cout << "Input group: "; cin >> inputGroup;
			if (inputGroup == "09.02.07") { 
				path = "DataBase\\ClassSchedule\\FirstCourse\\09-02-07.txt";

				cout << "The order of the schedule output: " << endl;
				cout << "Day of week - First - Second - Third - Fourth - Fiveth" << endl;
				cout << "None - the absence of a couple" << endl << endl;
				finStudent.open(path);
				if (finStudent.is_open()) {
					while (!finStudent.eof()) {
						count++;
						finStudent >> strFind;
						cout << strFind << " ";
						if (count == 11) { cout << endl; count = 0; }
					}
					finStudent.close();
					cout << "Enter 1 go to menu, 2 to exit from programm: "; cin >> studentChoise;
					if (studentChoise == "1") { clearingScreen(); logo(); mainMenuStudent(); }
					else if (studentChoise == "2") { exit(); }
					else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
				}
				else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); mainMenuStudent(); }
			}
			else if (inputGroup == "09.02.06") { 
				path = "DataBase\\ClassSchedule\\FirstCourse\\09-02-06.txt";

				cout << "The order of the schedule output: " << endl;
				cout << "Day of week - First - Second - Third - Fourth - Fiveth" << endl;
				cout << "None - the absence of a couple" << endl << endl;
				finStudent.open(path);
				if (finStudent.is_open()) {
					while (!finStudent.eof()) {
						count++;
						finStudent >> strFind;
						cout << strFind << " ";
						if (count == 11) { cout << endl; count = 0; }
					}
					finStudent.close();
					cout << "Enter 1 go to menu, 2 to exit from programm: "; cin >> studentChoise;
					if (studentChoise == "1") { clearingScreen(); logo(); mainMenuStudent(); }
					else if (studentChoise == "2") { exit(); }
					else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
				}
				else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); mainMenuStudent(); }
			}
			else { cout << "Incorrect input! Try again!"; clearingScreenWithSleep(); logo(); classSchedule(); }
		} 
		else if (inputCourse == "2") {
			cout << "Input group: "; cin >> inputGroup;
			if (inputGroup == "09.02.07") {
				path = "DataBase\\ClassSchedule\\SecondCourse\\09-02-07.txt";

				cout << "The order of the schedule output: " << endl;
				cout << "Day of week - First - Second - Third - Fourth - Fiveth" << endl;
				cout << "None - the absence of a couple" << endl << endl;
				finStudent.open(path);
				if (finStudent.is_open()) {
					while (!finStudent.eof()) {
						count++;
						finStudent >> strFind;
						cout << strFind << " ";
						if (count == 11) { cout << endl; count = 0; }
					}
					finStudent.close();
					cout << "Enter 1 go to menu, 2 to exit from programm: "; cin >> studentChoise;
					if (studentChoise == "1") { clearingScreen(); logo(); mainMenuStudent(); }
					else if (studentChoise == "2") { exit(); }
					else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
				}
				else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); mainMenuStudent(); }
			}
			else if (inputGroup == "09.02.06") {
				path = "DataBase\\ClassSchedule\\SecondCourse\\09-02-06.txt";

				cout << "The order of the schedule output: " << endl;
				cout << "Day of week - First - Second - Third - Fourth - Fiveth" << endl;
				cout << "None - the absence of a couple" << endl << endl;
				finStudent.open(path);
				if (finStudent.is_open()) {
					while (!finStudent.eof()) {
						count++;
						finStudent >> strFind;
						cout << strFind << " ";
						if (count == 11) { cout << endl; count = 0; }
					}
					finStudent.close();
					cout << "Enter 1 go to menu, 2 to exit from programm: "; cin >> studentChoise;
					if (studentChoise == "1") { clearingScreen(); logo(); mainMenuStudent(); }
					else if (studentChoise == "2") { exit(); }
					else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
				}
				else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); mainMenuStudent(); }
			}
			else { cout << "Incorrect input! Try again!"; clearingScreenWithSleep(); logo(); classSchedule(); }
		}
		else if (inputCourse == "3") {  
			cout << "Input group: "; cin >> inputGroup;
			if (inputGroup == "09.02.07") {
				path = "DataBase\\ClassSchedule\\ThirdCourse\\09-02-07.txt";

				cout << "The order of the schedule output: " << endl;
				cout << "Day of week - First - Second - Third - Fourth - Fiveth" << endl;
				cout << "None - the absence of a couple" << endl << endl;
				finStudent.open(path);
				if (finStudent.is_open()) {
					while (!finStudent.eof()) {
						count++;
						finStudent >> strFind;
						cout << strFind << " ";
						if (count == 11) { cout << endl; count = 0; }
					}
					finStudent.close();
					cout << "Enter 1 go to menu, 2 to exit from programm: "; cin >> studentChoise;
					if (studentChoise == "1") { clearingScreen(); logo(); mainMenuStudent(); }
					else if (studentChoise == "2") { exit(); }
					else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
				}
				else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); mainMenuStudent(); }
			}
			else if (inputGroup == "09.02.06") {
				path = "DataBase\\ClassSchedule\\ThirdCourse\\09-02-06.txt";

				cout << "The order of the schedule output: " << endl;
				cout << "Day of week - First - Second - Third - Fourth - Fiveth" << endl;
				cout << "None - the absence of a couple" << endl << endl;
				finStudent.open(path);
				if (finStudent.is_open()) {
					while (!finStudent.eof()) {
						count++;
						finStudent >> strFind;
						cout << strFind << " ";
						if (count == 11) { cout << endl; count = 0; }
					}
					finStudent.close();
					cout << "Enter 1 go to menu, 2 to exit from programm: "; cin >> studentChoise;
					if (studentChoise == "1") { clearingScreen(); logo(); mainMenuStudent(); }
					else if (studentChoise == "2") { exit(); }
					else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreenWithSleep(); logo(); mainMenuStudent(); }
				}
				else { cout << "Error connecting to the database! Try again!" << endl; finStudent.close(); clearingScreenWithSleep(); logo(); mainMenuStudent(); }
			}
			else { cout << "Incorrect input! Try again!"; clearingScreenWithSleep(); logo(); classSchedule(); }
		}
		else { cout << "Incorrect input! Try again!"; clearingScreenWithSleep(); logo(); classSchedule(); }
	}
	else { cout << "Incorrect input! Try again!"; clearingScreenWithSleep(); logo(); classSchedule(); }
}


