//#pragma warning(disable : 4996)
//#include <iostream>
//#include "fun.h"
//
//using namespace std;
//using namespace fun;
//
//struct stDate {
//	short Day;
//	short Month;
//	short Year;
//};
//
//bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
//		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
//			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
//}
//
//
//bool IsLastDayInMonth(stDate Date)
//{
//	return (Date.Day == NumberOfDaysInAMonth(Date.Month,
//		Date.Year));
//}
//bool IsLastMonthInYear(short Month)
//{
//	return (Month == 12);
//}
//
///*=======	problem 19	====================*/
//
//void sowpDates(stDate& Date1, stDate& Date2) {
//
//	stDate TampDate;
//
//	TampDate.Day = Date1.Day;
//	TampDate.Month = Date1.Month;
//	TampDate.Year = Date1.Year;
//
//	Date1.Day = Date2.Day;
//	Date1.Month = Date2.Month;
//	Date1.Year = Date2.Year;
//	
//	Date2.Day = TampDate.Day;
//	Date2.Month = TampDate.Month;
//	Date2.Year = TampDate.Year;
//
//	
//
//
//
//}
//
//
//
///*=========================================*/
//
//
//
//
//stDate IncreaseDateByOneDay(stDate Date) {
//
//
//	if (IsLastDayInMonth(Date)) {
//
//		if (IsLastMonthInYear(Date.Month)) {
//			Date.Month = 1;
//			Date.Day = 1;
//			Date.Year++;
//		}
//		else {
//			Date.Day = 1;
//			Date.Month++;
//		}
//
//
//	}
//	else {
//		Date.Day++;
//	}
//
//	return Date;
//}
//
//int GetDifferenceInDays(stDate Date1, stDate Date2, bool includeEndDay = false) {
//
//	int days = 0;
//	/*========19==========*/
//	short  sowpFlagValue = 1;
//
//
//	if (!IsDate1BeforeDate2(Date1, Date2)) {
//		sowpDates(Date1, Date2);
//		sowpFlagValue = -1;
//	}
//	/*========19==========*/
//
//	while (IsDate1BeforeDate2(Date1, Date2)) {
//
//		days++;
//		Date1 = IncreaseDateByOneDay(Date1);
//
//	}
//
//	//19
//	return includeEndDay ? ++days * sowpFlagValue : days * sowpFlagValue;
//
//
//}
//
//stDate ReadFullDate() {
//	stDate Date;
//
//	Date.Day = ReadDay();
//	Date.Month = ReadMonth();
//	Date.Year = ReadYear();
//
//
//	return Date;
//}
//
//
//void problem19() {
//
//	stDate Date1 = ReadFullDate();
//	stDate Date2 = ReadFullDate();
//
//
//	cout << "\nDiffrence is: "
//		<< GetDifferenceInDays(Date1, Date2) << " Day(s).";
//	cout << "\nDiffrence (Including End Day) is: "
//		<< GetDifferenceInDays(Date1, Date2, true) << " Day(s).";
//}