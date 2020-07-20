#include <iostream>
#include "Roster.h"
using namespace std;

int main() {
	cout << "Scripting and Programming - Applications - C867, C++, StudentId: 001069358, Joshua Robinson" << endl;
	Roster classRoster;
	classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
	classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmail.com", 19, 50, 30, 40, NETWORK);
	classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
	classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
	classRoster.add("A5", "Josh", "Robinson", "jrob713@wgu.edu", 34, 14, 25, 40, SOFTWARE);

	classRoster.printAll();
	classRoster.printInvalidEmails();

	//prints the average days for all the students in the classRosterAray
	for (auto p : classRoster.classRosterArray) {
		classRoster.printAverageDaysInCourse(p->GetStudentId());
	}

	classRoster.printByDegreeProgram(SOFTWARE);

	classRoster.remove("A3");

	classRoster.printAll();

	classRoster.remove("A3");

	return 0;
}