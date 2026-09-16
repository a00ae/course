#include <iostream>
#include "fun.h"


using namespace std;

namespace fun {


	//function
	bool isLeapYear(short year) {


		return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	}

	short NumberOfDaysInAMonth(short month, short year) {

		if (month < 1 || month > 12)
			return 0;
		
		int deas[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30,31 };

		return (month == 2) ? (isLeapYear(year) ? 29 : 28) : deas[month - 1];

	}

	short ReadYear() {
		short year;
		cout << "Enter a Year? ";
		cin >> year;
		return year;
	}

	short ReadMonth() {
		short month;
		cout << "Enter a month? ";
		cin >> month;
		return month;
	}

	short ReadDay() {
		short day;
		cout << "Enter a Day? ";
		cin >> day;
		return day;
	}

	short NumberOfDaysFromTheBeginingOfTheYear(short day, short month, short year) {

		short TotalDeas = 0;

		for (int i = 0; i < month; i++) {
			TotalDeas += NumberOfDaysInAMonth(i, year);
		}

		TotalDeas += day;

		return TotalDeas;
	}


}