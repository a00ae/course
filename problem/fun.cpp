#include <iostream>
#include "fun.h"


using namespace std;

namespace fun {
	bool isLeapYear(short year) {


		return (year % 4 == 0 || year % 100 != 0) || (year % 400 == 0);
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
}