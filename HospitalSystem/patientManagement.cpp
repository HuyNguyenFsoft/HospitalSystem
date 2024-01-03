#include "patientManagement.h"

void patientManagement::addNewPatient()
{
	patient newPatient;
	cout << "Enter specialization, name, statis: ";
	cin >> newPatient.specialization >> newPatient.name >> newPatient.statis;
	while ((newPatient.specialization < 1 && newPatient.specialization > 20) || (newPatient.statis != 0 && newPatient.statis != 1))
	{
		cout << "Specialization is between 1 and 20. Statis are 0 or 1.\n";
		cout << "Enter specialization, name, statis: ";
		cin >> newPatient.specialization >> newPatient.name >> newPatient.statis;
	}
	if (patientQueue[newPatient.specialization - 1].size() >= MAX_LENGTH_OF_QUEUE)
	{
		cout << "Sorry we can't add more patients for this specialization\n";
		return;
	}
	else
	{
		if (newPatient.statis == URGENT)
		{
			patientQueue[newPatient.specialization - 1].insert(patientQueue[newPatient.specialization - 1].begin(), newPatient);
		}
		else
		{
			patientQueue[newPatient.specialization - 1].push_back(newPatient);
		}
	}
}

void patientManagement::printAllPatient()
{
	for (int i = 0; i < 20; i++)
	{
		if (patientQueue[i].size() == 0)
		{
			continue;
		}
		else
		{
			int lengthOfQueue = patientQueue[i].size();
			cout << "There are " << lengthOfQueue << " patients in specialization " << i + 1 << ": \n";
			for (auto element : patientQueue[i])
			{
				string statis = "";
				if (element.statis == REGULAR)
				{
					statis = "regular";
				}
				else
				{
					statis = "urgent";
				}
				cout << element.name << " " << statis << endl;
			}

		}
	}
}

void patientManagement::getNextPatient()
{

}