#pragma once
#include <string>
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
		int age;
	public:
		//Getter/Setter for age
		void SetAge(int a) {
			age = a;
		}
		int GetAge() {
			return age;
		}

	private:
		int numberOfDaysToCompleteEachCourse [3];
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

		
};

