#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int STUDENTS = 4;
const int TESTS = 5;

struct Student
{
	string name;
	int identification;
	int info[TESTS];
	double average;
	char grade;
};