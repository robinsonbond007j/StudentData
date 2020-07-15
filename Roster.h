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
			int i = 0;
			bool studentFound = false;
			for (Student* s : classRosterArray) {
				if (s->GetStudentId == studentId) {
					delete classRosterArray[i];
					studentFound = true;
					break;
				}
				i++;
			}
			//We assume that the student entered wasn't found in the classRosterArray
			if (!studentFound) {
				cout << "The Student was not found." << endl;
			}
		}

	public:
		void printAll() {
			//This prints all of the students information
			for (Student* s : classRosterArray) {
				cout << s->Print.StudentId + "	",
					"First Name: ", s->Print.FirstName + "	",
					"Last Name: ", s->Print.LastName + "	",
					"Age: ", s->Print.Age + "	",
					"daysInCourse: ", s->Print.NumberofDaysToCompleteEachCourse + "	",
					"Degree Program: ", s->Print.DegreeProgram << endl;
			}
		}

	public:
		void printAverageDaysInCourse(string studentId) {
			int i = 0;
			int sumOfDays = 0;
			int averageOfDays = 0;
			for (Student* s : classRosterArray) {
				if (s->GetStudentId == studentId) {
					sumOfDays += s->GetNumberOfDaysToCompleteCourse1;
					sumOfDays += s->GetNumberOfDaysToCompleteCourse2;
					sumOfDays += s->GetNumberOfDaysToCompleteCourse3;
					break;
				}
				i++;
			}
			if (sumOfDays > 0) {
				averageOfDays = sumOfDays / 3;
				cout << "Average Number of Days in course: " + averageOfDays << endl;
			}
		}

	public:
		void printInvalidEmails() {
			for (Student* s : classRosterArray) {
				string e = s->GetEmailAddress;
				if (e.find(' ') != string::npos) {
					//Found invalid email address
					cout << "Found invalid email address: " + e << endl;
				}
				else if (e.find('.@') == string::npos) {
					//Found invalid email address
					cout << "Found invalid email address: " + e << endl;
				}
			}
		}

	public:
		void printByDegreeProgram(DegreeProgram degreeProgram) {
			for (Student* s : classRosterArray) {
				if (s->GetDegreeProgram == degreeProgram) {
					cout << s->Print.StudentId + "	",
						"First Name: ", s->Print.FirstName + "	",
						"Last Name: ", s->Print.LastName + "	",
						"Age: ", s->Print.Age + "	",
						"daysInCourse: ", s->Print.NumberofDaysToCompleteEachCourse + "	",
						"Degree Program: ", s->Print.DegreeProgram << endl;
				}
			}
		}
};
