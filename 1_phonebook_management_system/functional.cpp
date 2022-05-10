#define DATABASE_PATH "database"

#include "functional.h"

using namespace std;

void addNewPhoneRecord()
{
	PhoneRecord phoneRecord;

	cout << "Enter phone number: ";
	cin >> phoneRecord.phoneNumber;
	cout << "Enter contact name: ";
	cin >> phoneRecord.contactName;

	ofstream databaseFile(DATABASE_PATH);

	databaseFile << phoneRecord.getPhoneRecord() << "\n";
	databaseFile.close();
}
