#pragma once

namespace fun {
	//struct stDate;


	bool isLeapYear(short year);

	short ReadYear();
	short ReadMonth();
	short ReadDay();

	short NumberOfDaysInAMonth(short month, short year);

	short NumberOfDaysFromTheBeginingOfTheYear(short day, short month, short year);


}
