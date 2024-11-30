#include "Functions.h" 

ifstream finTeach;
Teacher th;

void firstAuthorizationTeacher(string refLogin) {
	string name; string surName; string secondName; string age;
	string specialization; string lecturesHeld; string lecturesUnprowen; 
	string vacation; string salary;

	string pathTeacher = "DataBase\\InfoAbout\\InfoAllTeachers.txt"; string teachersStrFind;

	finTeach.open(pathTeacher);
	if (finTeach.is_open()) {
		while (!finTeach.eof()) {
			finTeach >> teachersStrFind;
			if (refLogin == teachersStrFind) {
				for (char i = 0; i < 2; i++) { finTeach >> teachersStrFind; name = teachersStrFind; } th.setName(name);
				for (char i = 0; i < 2; i++) { finTeach >> teachersStrFind; surName = teachersStrFind; } th.setSurname(surName);
				for (char i = 0; i < 2; i++) { finTeach >> teachersStrFind; secondName = teachersStrFind; } th.setSecondname(secondName);
				for (char i = 0; i < 2; i++) { finTeach >> teachersStrFind; age = teachersStrFind; } th.setAge(age);
				for (char i = 0; i < 2; i++) { finTeach >> teachersStrFind; specialization = teachersStrFind; } th.setSpecialization(specialization);
				for (char i = 0; i < 2; i++) { finTeach >> teachersStrFind; lecturesHeld = teachersStrFind; } th.setLecturesHeld(lecturesHeld);
				for (char i = 0; i < 2; i++) { finTeach >> teachersStrFind; lecturesUnprowen = teachersStrFind; } th.setLecturesUnprowen(lecturesUnprowen);
				for (char i = 0; i < 2; i++) { finTeach >> teachersStrFind; vacation = teachersStrFind; } th.setVacation(vacation);
				for (char i = 0; i < 2; i++) { finTeach >> teachersStrFind; salary = teachersStrFind; } th.setSalary(salary);
				finTeach.close(); 
			}
		}
	}
	else { cout << "Error connecting to the database! Try again!" << endl; finTeach.close(); clearingScreenWithSleep(); logo(); authorization(); }
	finTeach.close();
}

void informationAboutTeacher(bool dirConnect) {
	string choiseTeacher;

	cout << "Information about teacher:" << endl;
	cout << "Name: " << th.getName() << endl;
	cout << "Surname: " << th.getSurname() << endl;
	cout << "Secondname: " << th.getSecondname() << endl;
	cout << "Age: " << th.getAge() << endl;
	cout << "Specialization of teacher: " << th.getSpecialization() << endl;
	cout << "The number of conducted: " << th.getLecturesHeld() << endl;
	cout << "The teacher is on vacation: " << th.getVacation() << endl;
	cout << "Teacher's salary: " << th.getSalary() << endl;

	cout << "Enter 1 to go to the menu, or 2 go to exit: "; cin >> choiseTeacher;
	if (choiseTeacher == "1" && dirConnect == false) { clearingScreen(); logo(); mainMenuTeacher(); }
	else if (choiseTeacher == "1" && dirConnect == true) { clearingScreen(); logo(); mainMenuDirector(); }
	else if (choiseTeacher == "2") { exit(); }
	else if (choiseTeacher != "1" && choiseTeacher != "2" && dirConnect == true) { cout << "Not correct input! Redirecting you to the menu..."; clearingScreen(); logo(); mainMenuDirector(); }
	else { cout << "Not correct input! Redirecting you to the menu..."; clearingScreen(); logo(); mainMenuTeacher(); }
}

void mainMenuTeacher() {
	string chosieTeacher;

	cout << "Welcome to the system, " << th.getName() << "!" << endl;
	cout << "Functionality: " << endl;
	cout << "1 - Information about teacher" << endl;
	cout << "2 - List of teachers" << endl;
	cout << "Your choise: "; cin >> chosieTeacher;
	if (chosieTeacher == "1") { clearingScreen(); logo(); informationAboutTeacher(false); }
	else if (chosieTeacher == "2") {
		clearingScreen(); logo(); bool result = listoOfTeachers();
		if (result == true) { clearingScreen(); logo(); mainMenuTeacher(); }
	}

	else { cout << "Incorrect input! Try again!"; clearingScreenWithSleep(); logo(); classSchedule(); }
}

void listCuratorGroup() {
	
}

