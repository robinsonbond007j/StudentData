#pragma once
#include <string>
#include "Student.h"
#include <sstream>
using namespace std;
class Roster
{
	Student* classRosterArray[5] ;
	Student* student[5];
	int index = 0;
	/*Student* student1 = new Student("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
	Student* student2 = new Student("A2", "Suzan", "Erickson", "Erickson_1990@gmail.com", 19, 50, 30, 40, NETWORK);
	Student* student3 = new Student("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
	Student* student4 = new Student("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
	Student* student5 = new Student("A5", "Josh", "Robinson", "jrob713@wgu.edu", 34, 14, 25, 40, SOFTWARE);*/

	public:
		void add(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
			student[index] = new Student(studentId, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
			classRosterArray[index] = student[index]; //assign the student to the roster
			index++; //index by one after each student is added to the roster
			if (index > 4) {
				index = 0;
			}
		}

	public:
		void remove(string studentId) {
			//Convert studentId to int so we can find it in the array
			string iString = studentId.substr(1, 1);
			stringstream iStream(iString);
			int i = 0;
			iStream >> i;
			string id;
			//The array is a zero based index so subtract 1
			if (i > 0) {
				i -= 1;
				id = classRosterArray[i]->GetStudentId;
				//TODO need to finish writing pull the students information and then remove it
				//TODO if the information exists. If it doesn't exist.
				//TODO add an if statement like the else statement below.
			}
			//If the student is not found then write a message and return
			else {
				cout << "The Student was not found." << endl;
				return;
			}
			
		}
};
