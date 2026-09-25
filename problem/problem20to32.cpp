#include <iostream>
#include "fun.h"

using namespace std;
using namespace fun;

struct stDate {
	short Year;
	short Month;
	short Day;
};


bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}


bool IsLastDayInMonth(stDate Date) {

	return  (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));

}

bool IsLastMinthInYear(short Month) {
	return (Month == 12);
}

stDate IncreaseDateByOneDay(stDate Date) {
	if (IsLastDayInMonth(Date)) {

		if (IsLastMinthInYear(Date.Month)) {
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else {
			Date.Month++;
			Date.Day = 1;
		}
	}
	else {
		Date.Day++;
	}
	return Date;
}

stDate ReadFullDate() {
	stDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}



void problem20To32() {
	stDate Date = ReadFullDate();
	Date = IncreaseDateByOneDay(Date);



	cout << "Date: " << Date.Day << "/" << Date.Month << "/" << Date.Year;



}