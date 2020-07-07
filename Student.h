#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student
{
	private:
		string studentId;
	public:
		//Getter/Setter for studentId
		void SetStudentId(string id) {
			studentId = id;
		}
		string GetStudentId() {
			return studentId;
		}

	private:
		string firstName;
	public:
		//Getter/Setter for firstName
		void SetFirstName(string fName) {
			firstName = fName;
		}
		string GetFirstName() {
			return firstName;
		}

	private:
		string lastName;
	public:
		//Getter/Setter for lastName
		void SetLastName(string lName) {
			lastName = lName;
		}
		string GetLastName() {
			return lastName;
		}	

	private:
		string emailAddress;
	public:
		//Getter/Setter for emailAddress
		void SetEmailAddress(string email) {
			emailAddress = email;
		}
		string GetEmailAddress() {
			return emailAddress;
		}

	private:
		int age = 0;
	public:
		//Getter/Setter for age
		void SetAge(int a) {
			age = a;
		}
		int GetAge() {
			return age;
		}

	private:
		int numberOfDaysToCompleteEachCourse[3] = { 0,0,0 };
	public:
		//Getter/Setter for numberOfDaysToCompleteEachCourse
		//Course 1
		void SetNumberOfDaysToCompleteCourse1(int n) {
			numberOfDaysToCompleteEachCourse[0] = n;
		}
		int GetNumberOfDaysToCompleteCourse1() {
			return numberOfDaysToCompleteEachCourse[0];
		}
		//Course 2
		void SetNumberOfDaysToCompleteCourse2(int n) {
			numberOfDaysToCompleteEachCourse[1] = n;
		}
		int GetNumberOfDaysToCompleteCourse2() {
			return numberOfDaysToCompleteEachCourse[1];
		}
		//Course 3
		void SetNumberOfDaysToCompleteCourse3(int n) {
			numberOfDaysToCompleteEachCourse[2] = n;
		}
		int GetNumberOfDaysToCompleteCourse3() {
			return numberOfDaysToCompleteEachCourse[2];
		}

	private:
		string degreeProgram;
	public:
		//Getter/Setter for degreeProgram
		void SetDegreeProgram(string program) {
			degreeProgram = program;
		}
		string GetDegreeProgram() {
			return degreeProgram;
		}

	//Constructor for the class
	public:
		Student(string studentId, string firstName, string lastName, string emailAddress, int age, int daysToCompleteCourse[3], string degreeProgram) {
			//Assign the variables
			SetStudentId(studentId);
			SetFirstName(firstName);
			SetLastName(lastName);
			SetEmailAddress(emailAddress);
			SetAge(age);
			SetNumberOfDaysToCompleteCourse1(daysToCompleteCourse[0]);
			SetNumberOfDaysToCompleteCourse2(daysToCompleteCourse[1]);
			SetNumberOfDaysToCompleteCourse3(daysToCompleteCourse[2]);
			SetDegreeProgram(degreeProgram);
		}

	enum PrintOut {
		StudentId,
		FirstName,
		LastName,
		EmailAddress,
		Age,
		NumberofDaysToCompleteEachCourse,
		DegreeProgram
	};

	public:
		void Print(PrintOut p) {
			switch (p)
			{
				case StudentId:
					cout << studentId;
					break;
				case FirstName:
					cout << firstName;
					break;
				case LastName:
					cout << lastName;
					break;
				case EmailAddress:
					cout << emailAddress;
					break;
				case Age:
					cout << age;
					break;
				case NumberofDaysToCompleteEachCourse:
					cout << NumberofDaysToCompleteEachCourse;
					break;
				case DegreeProgram:
					cout << degreeProgram;
					break;
			default:
				break;
			}
		}
};

