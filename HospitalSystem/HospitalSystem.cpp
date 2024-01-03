
#include <iostream>
#include "patientManagement.h"
using std::cout;
using std::endl;

int main()
{
	int choice;
	patientManagement Manager;
	while (1)
	{
		cout << "Enter your choice: " << endl;
		cout << "1) Add new patient\n";
		cout << "2) Print all patients\n";
		cout << "3) Get next patient\n";
		cout << "4) Exit\n";
		cin >> choice;
		if (choice < 1 || choice > 4)
		{
			cout << "Please enter value between 1-4\n";
		}
		switch (choice)
		{
		case 1:
			Manager.addNewPatient();
			break;
		case 2:
			Manager.printAllPatient();
			break;
		case 4:
			exit(0);
		default:
			break;
		}
	}
	return 0;
}
