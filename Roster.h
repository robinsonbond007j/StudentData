#pragma once
#include <string>
#include "Student.h"
#include "Degree.h"
#include <sstream>
using namespace std;
class Roster
{
	Student* classRosterArray[5];
	Student* student[5];
	int index = 0;	

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
				if (s->GetStudentId() == studentId) {
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
			for (auto s : classRosterArray) {
				cout << s->GetStudentId() << " "
					 << "First Name: "<< s->GetFirstName() << " "
					 << "Last Name: " << s->GetLastName() << " "
					 << "Age: " << s->GetAge() << " "
					 << "daysInCourse: {" << s->GetNumberOfDaysToCompleteCourse1() << ", "
					 << s->GetNumberOfDaysToCompleteCourse2() << ", "
					 << s->GetNumberOfDaysToCompleteCourse3() << "} "
					 << "Degree Program: " << s->GetDegreeProgramToString()
					 << endl;
			}
		}

	public:
		void printAverageDaysInCourse(string studentId) {
			int i = 0;
			int sumOfDays = 0;
			int averageOfDays = 0;
			for (Student* s : classRosterArray) {
				if (s->GetStudentId() == studentId) {
					sumOfDays += s->GetNumberOfDaysToCompleteCourse1();
					sumOfDays += s->GetNumberOfDaysToCompleteCourse2();
					sumOfDays += s->GetNumberOfDaysToCompleteCourse3();
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
				string e = s->GetEmailAddress();
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
			for (auto s : classRosterArray) {
				if (s->GetDegreeProgram() == degreeProgram) {
					cout << s->GetStudentId() << " "
						<< "First Name: " << s->GetFirstName() << " "
						<< "Last Name: " << s->GetLastName() << " "
						<< "Age: " << s->GetAge() << " "
						<< "daysInCourse: {" << s->GetNumberOfDaysToCompleteCourse1() << ", "
						<< s->GetNumberOfDaysToCompleteCourse2() << ", "
						<< s->GetNumberOfDaysToCompleteCourse3() << "} "
						<< "Degree Program: " << s->GetDegreeProgramToString()
						<< endl;
				}
			}
		}

		
};
