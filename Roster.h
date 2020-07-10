#pragma once
#include <string>
#include "Student.h"
using namespace std;
class Roster
{
	//TODO make sure when add a student or remove that I change the roster size
	//TODO use the new statement maybe??? Look it up when you get to it
	string* classRosterArray[5];
	Student* student1 = new Student("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, "SECURITY");
	Student* student2 = new Student("A2", "Suzan", "Erickson", "Erickson_1990@gmail.com", 19, 50, 30, 40, "NETWORK");
	Student* student3 = new Student("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, "SOFTWARE");
	Student* student4 = new Student("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, "SECURITY");
	Student* student5 = new Student("A5", "Josh", "Robinson", "jrob713@wgu.edu", 34, 14, 25, 40, "SOFTWARE");
};
