// Lab03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
 
struct Student {
	int mark1;
	int mark2;
	float ca1;
	float ca2;
};

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2);

int main()
{
	Student students[5] = {};

	
	for (int i = 0; i < 5; i++) {
		Student tStu;
		cout << "Enter Mark 1 for Student " << i+1 << ": ";
		cin >> tStu.mark1;

		cout << "Enter Mark 2 for Student " << i+1 << ": ";
		cin >> tStu.mark2;

		findMarks(tStu.mark1, tStu.mark2, tStu.ca1, tStu.ca2);
		students[i] = tStu;
	}
	cout
		<< endl
		<< "Student"
		<< setw(10)
		<< "Marks1"
		<< setw(10)
		<< "Marks2"
		<< setw(10)
		<< "CA_1"
		<< setw(10)
		<< "CA_2"
		<< endl;

	for (int i = 0; i < 5; i++) {
		Student tStu = students[i];
		cout
			<< i + 1
			<< setw(10)
			<< tStu.mark1
			<< setw(10)
			<< tStu.mark2
			<< setw(10)
			<< setiosflags(ios::fixed)
			<< setprecision(2)
			<< tStu.ca1
			<< setw(10)
			<< setiosflags(ios::fixed)
			<< setprecision(2)
			<< tStu.ca2
			<< endl;

	}


	return 0;
}

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2) {
	t_CA1 = float(t_marks1 * 20 / 100);
	t_CA2 = float(t_marks1 * 30 / 100);
}