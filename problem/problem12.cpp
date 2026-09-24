//#include <iostream>
//#include "fun.h"
//
//using namespace std;
//using namespace fun;

//struct stDate {
//	short Day;
//	short Month;
//	short Year;
//};
//
//stDate GetDataFromDeasInYear(short DaysOrderInYear, short year) {
//
//	stDate Date;
//	short RemainingDays = DaysOrderInYear;
//	short MonthDeys = 0;
//
//	Date.Year = year;
//	Date.Month = 1;
//
//	while (true) {
//		MonthDeys = NumberOfDaysInAMonth(Date.Month, year);
//		if (RemainingDays > MonthDeys) {
//			RemainingDays -= MonthDeys;
//			Date.Month++;
//		}
//		else {
//			Date.Day = RemainingDays;
//			break;
//		}
//
//	}
//
//	return Date;
//
//
//
//}
// 





//
//stDate DateAddDays(stDate Date, short Days) {
//	
//	short RemainingDays = Days + NumberOfDaysFromTheBeginingOfTheYear(Date.Day, Date.Month, Date.Year);
//
//	short MonthDays = 0;
//
//	Date.Month = 1;
//	while (true) {
//		MonthDays = NumberOfDaysInAMonth(Date.Month, Date.Year);
//
//		if (RemainingDays > MonthDays) {
//
//
//			RemainingDays -= MonthDays;
//			Date.Month++;
//
//
//			if (Date.Month > 12) {
//				Date.Month = 1;
//				Date.Year++;
//			}
//		}
//		else {
//			Date.Day = RemainingDays;
//			break;
//		}
//
//
//	}
//
//	return Date;
//}
//
//stDate ReadFullDate() {
//	stDate Date;
//
//	Date.Day = ReadDay();
//	Date.Month = ReadMonth();
//	Date.Year = ReadYear();
//
//	return Date;
//}
//
//
//short ReadDaysToAdd() {
//	short days;
//	cout << "\nHow many days to add? ";
//	cin >> days;
//	return days;
//}
//
//
//void problem12() {
//
//	stDate Date = ReadFullDate();
//	short Days = ReadDaysToAdd();
//
//	Date = DateAddDays(Date, Days);
//	cout << "\nDate after adding [" << Days << "] days is: ";
//	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;
//

//}