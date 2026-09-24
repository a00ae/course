#pragma warning(disable : 4996)
#include <iostream>
#include "fun.h"

using namespace std;
using namespace fun;

struct stDate {
	short Day;
	short Month;
	short Year;
};

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}


bool IsLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month,
		Date.Year));
}
bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}




stDate IncreaseDateByOneDay(stDate Date) {


	if (IsLastDayInMonth(Date)) {

		if (IsLastMonthInYear(Date.Month)) {
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else {
			Date.Day = 1;
			Date.Month++;
		}


	}
	else {
		Date.Day++;
	}

	return Date;
}

int GetDifferenceInDays(stDate Date1, stDate Date2, bool includeEndDay = false) {

	int days = 0;

	while (IsDate1BeforeDate2(Date1, Date2)) {

		days++;
		Date1 = IncreaseDateByOneDay(Date1);

	}


	return includeEndDay ? ++days : days;


}

stDate ReadFullDate() {
	stDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();


	return Date;
}





//problem 18


stDate GetSystemDate() {
	stDate Date;

	time_t t = time(0);
	tm* now = localtime(&t);


	Date.Year = now->tm_year + 1900;
	Date.Month = now->tm_mon + 1;;
	Date.Day = now->tm_mday;


	return Date;



}






void problem18() {
	cout << "\nPlease Enter Your Date of Birth:\n";

	stDate Date1 = ReadFullDate();
	stDate Date2 = GetSystemDate();


	cout << "\nYour Age is : "
		<< GetDifferenceInDays(Date1, Date2, true) << " Day(s).";
}