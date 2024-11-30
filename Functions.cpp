#include "Functions.h"

void logo() {
	SYSTEMTIME st;
	GetLocalTime(&st);
	short minute = st.wMinute; short hour = st.wHour;
	short day = st.wDay; short month = st.wMonth; short year = st.wYear;

	if (minute < 10 && month >= 10 && hour >= 10 && day >= 10) { cout << "\t\t\t\t\t\t   " << day << "." << month << "." << year << ", " << hour << ":0" << minute << endl; }
	else if (minute >= 10 && month < 10 && hour >= 10 && day >= 10) { cout << "\t\t\t\t\t\t   " << day << ".0" << month << "." << year << ", " << hour << ":" << minute << endl; }
	else if (minute >= 10 && month >= 10 && hour < 10 && day >= 10) { cout << "\t\t\t\t\t\t   " << day << "." << month << "." << year << ", 0" << hour << ":" << minute << endl; }
	else if (minute >= 10 && month >= 10 && hour >= 10 && day < 10) { cout << "\t\t\t\t\t\t   0" << day << "." << month << "." << year << ", " << hour << ":" << minute << endl; }
	else if (minute < 10 && month < 10 && hour >= 10 && day >= 10) { cout << "\t\t\t\t\t\t   " << day << ".0" << month << "." << year << ", " << hour << ":0" << minute << endl; }
	else if (minute < 10 && month >= 10 && hour < 10 && day >= 10) { cout << "\t\t\t\t\t\t   " << day << "." << month << "." << year << ", 0" << hour << ":0" << minute << endl; }
	else if (minute < 10 && month >= 10 && hour >= 10 && day < 10) { cout << "\t\t\t\t\t\t   0" << day << "." << month << "." << year << ", " << hour << ":0" << minute << endl; }
	else if (minute >= 10 && month < 10 && hour < 10 && day >= 10) { cout << "\t\t\t\t\t\t   " << day << ".0" << month << "." << year << ", 0" << hour << ":" << minute << endl; }
	else if (minute >= 10 && month < 10 && hour >= 10 && day < 10) { cout << "\t\t\t\t\t\t   0" << day << ".0" << month << "." << year << ", " << hour << ":" << minute << endl; }
	else if (minute >= 10 && month >= 10 && hour < 10 && day < 10) { cout << "\t\t\t\t\t\t   0" << day << ".0" << month << "." << year << ", " << hour << ":" << minute << endl; }
	else if (minute < 10 && month < 10 && hour < 10 && day >= 10) { cout << "\t\t\t\t\t\t   " << day << ".0" << month << "." << year << ", 0" << hour << ":0" << minute << endl; }	
	else if (minute < 10 && month >= 10 && hour < 10 && day < 10) { cout << "\t\t\t\t\t\t   0" << day << ".0" << month << "." << year << ", " << hour << ":0" << minute << endl; }
	else if (minute < 10 && month < 10 && hour >= 10 && day < 10) { cout << "\t\t\t\t\t\t   0" << day << ".0" << month << "." << year << ", " << hour << ":0" << minute << endl; }
	else if (minute >= 10 && month < 10 && hour < 10 && day < 10) { cout << "\t\t\t\t\t\t   0" << day << ".0" << month << "." << year << ", 0" << hour << ":" << minute << endl; }
	else if (minute < 10 && month < 10 && hour < 10 && day < 10) { cout << "\t\t\t\t\t\t   0" << day << ".0" << month << "." << year << ", 0" << hour << ":0" << minute << endl; }
	else { cout << "\t\t\t\t\t\t   " << day << "." << month << "." << year << ", " << hour << ":" << minute << endl; }
	cout << " ==================================================== " << "         " << " ======================================================= " << endl;
	cout << "\t\t\t\t\t\t    " << "Online Journal" << endl;
	cout << " ==================================================== " << "         " << " ======================================================= " << endl;
}

void exit() { cout << "Programm end work."; }
void clearingScreen() { system("cls"); }
void clearingScreenWithSleep() { Sleep(5000); system("cls"); }

void inicialization(bool teacherConnect, string refLogin) {
	string point = "."; short loadingNumber = 0;
	loadingNumber = rand() % (4 - 1) + 1;

	if (teacherConnect == false) {
		thread thr(firstAuthorizationStudent, refLogin);
		thr.detach();
		thr.~thread();
	}
	else if (teacherConnect == true) {
		thread thr(firstAuthorizationTeacher, refLogin);
		thr.detach();
		thr.~thread();
	}

	switch (loadingNumber) {
	case 1: {
		logo(); cout << "\t\t\t\t\t\tInicialization... 1%" << endl; ;
		cout << "\t\t\t\t\t\t"; cout << "|"; cout << point; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 12%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 3; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 26%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 6; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 38%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 8; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 53%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 11; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 68%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 14; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 81%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 17; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 95%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 19; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 100%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 20; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");
		break;
	}
	case 2: {
		logo(); cout << "\t\t\t\t\t\tInicialization... 1%" << endl; ;
		cout << "\t\t\t\t\t\t"; cout << "|"; cout << point; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 15%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 3; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 21%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 5; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 35%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 7; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 49%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 10; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 61%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 13; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 74%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 14; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 87%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 17; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 100%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 20; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");
		break;
	}
	case 3: {
		logo(); cout << "\t\t\t\t\t\tInicialization... 1%" << endl; ;
		cout << "\t\t\t\t\t\t"; cout << "|"; cout << point; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 10%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 2; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 24%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 5; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 40%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 8; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 56%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 12; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 71%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 15; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 87%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 17; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 98%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 19; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");

		logo(); cout << "\t\t\t\t\t\tInicialization... 100%" << endl;
		cout << "\t\t\t\t\t\t"; cout << "|"; for (char i = 0; i < 20; i++) { cout << point; }; cout << "|"; Sleep(1000); system("cls");
		break;
	}
	default: { cout << "Unknown error!" << endl; Sleep(1000); exit(); break; }
	};
}

bool authorization() {
	ifstream fin;
	bool successfulAuthorization = false;
	string loginUser; string passwordUser; 
	bool teacherConnect = false; bool dirConnect = false;
	string refLogin;

	string strFind; string path; string choiseUser;

	cout << "Welcome to the online journal!" << endl;
	cout << "Who are you? 1 - Teacher, 2 - Student" << endl << "Input number: "; cin >> choiseUser;
	if (choiseUser == "1") { path = "DataBase\\LoginsAndPasswords\\LoginsAndPasswordsTeachers.txt"; teacherConnect = true; }
	else if (choiseUser == "2") { path = "DataBase\\LoginsAndPasswords\\LoginsAndPasswordsStudents.txt"; }
	else if (choiseUser == "d") { path = "DataBase\\LoginsAndPasswords\\LoginsAndPasswords.txt"; dirConnect = true; }
	else { cout << "Incorrect input! Try again!"; clearingScreenWithSleep(); logo(); authorization(); }

	cout << "Input your login: "; cin >> loginUser;
	fin.open(path);
	if (fin.is_open()) {
		while (!fin.eof()) {
			fin >> strFind;
			if (loginUser == strFind) {
				refLogin = strFind;
				cout << "Input your password: "; cin >> passwordUser;
				for (char i = 0; i < 2; i++) { fin >> strFind; }
				if (passwordUser == strFind && choiseUser != "d") { cout << "Successful authorization!"; fin.close(); clearingScreen(); successfulAuthorization = true; srand(time(0)); break; }
				else if (passwordUser == strFind && choiseUser == "d") { cout << "Successful authorization!"; fin.close(); clearingScreen(); successfulAuthorization = true; srand(time(0)); break; }
				else { cout << "Password not correct! Try again!"; fin.close(); clearingScreenWithSleep(); logo(); authorization(); }
			} else { for (char i = 0; i < 4; i++) { fin >> strFind; } }
		}
		if (successfulAuthorization == false) { cout << "Login not correct! Try again!"; fin.close(); clearingScreenWithSleep(); logo(); authorization(); }
	} else { cout << "Error connecting to the database! Try again!"; fin.close(); clearingScreenWithSleep(); logo(); authorization(); }
	fin.close();

	if (successfulAuthorization == true && teacherConnect == false && dirConnect == false) { inicialization(teacherConnect, loginUser); logo(); mainMenuStudent(); }
	else if (successfulAuthorization == true && teacherConnect == true && dirConnect == false) { inicialization(teacherConnect, loginUser); logo(); mainMenuTeacher(); }
	else if (successfulAuthorization == true && teacherConnect == false && dirConnect == true) { clearingScreen(); logo(); mainMenuDirector(); }
	else { cout << "Unknown error! Try again!"; clearingScreenWithSleep(); logo(); authorization(); }

	return successfulAuthorization;
}

bool listoOfTeachers() {
	ifstream finListTeach;
	Teacher thList;
	string path = "DataBase\\InfoAbout\\InfoAllTeachers.txt"; string buffer; string choiseUser;

	bool resultList = false;
	char countTeachersAllList = 2;
	char countTeachersList = 0;

	cout << "The list of teachers of our institution: " << endl;
	finListTeach.open(path);
	finListTeach.is_open();
	do {
		for (char i = 0; i < 3; i++) { finListTeach >> buffer; } thList.setName(buffer);
		for (char i = 0; i < 2; i++) { finListTeach >> buffer; } thList.setSurname(buffer);
		for (char i = 0; i < 2; i++) { finListTeach >> buffer; } thList.setSecondname(buffer);
		for (char i = 0; i < 4; i++) { finListTeach >> buffer; } thList.setSpecialization(buffer);

		cout << " Name - " << thList.getName() << ", surname - " << thList.getSurname() <<
			", secondname - " << thList.getSecondname() << ", specialization: " << thList.getSpecialization() << endl;
		countTeachersList++;
		for (char i = 0; i < 10; i++) { finListTeach >> buffer; }
	} while (countTeachersAllList != countTeachersList);
	finListTeach.close();
	
	cout << "Press 1 go to main menu, 2 exit: "; cin >> choiseUser;
	if (choiseUser == "1") { resultList = true; }
	else if (choiseUser == "2") { exit(); }
	else { cout << "Incorrect input! Try again!"; clearingScreenWithSleep(); logo(); listoOfTeachers(); }

	return resultList;
}



