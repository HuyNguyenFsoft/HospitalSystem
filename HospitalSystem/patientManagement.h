#pragma once
#include <string>
#include <iostream>
#include <vector>
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

#define REGULAR 0
#define URGENT 1
#define MAX_LENGTH_OF_QUEUE 5

struct patient {
	unsigned int specialization;
	string name;
	unsigned int statis;
};

class patientManagement
{
private:
	vector<patient> patientQueue[20];

public:
	void addNewPatient();
	void printAllPatient();
	void getNextPatient();
};

