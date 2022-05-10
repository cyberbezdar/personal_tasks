#ifndef PHONEBOOK_MANAGEMENT_SYSTEM_FUNCTIONAL_H
#define PHONEBOOK_MANAGEMENT_SYSTEM_FUNCTIONAL_H

#include <iostream>
#include <fstream>

using namespace std;

struct PhoneRecord
{
	string phoneNumber;
	string contactName;

	string getPhoneRecord()
	{ return phoneNumber + " " + contactName; }
};

void addNewPhoneRecord();

#endif //PERSONAL_TASKS_FUNCTIONAL_H
