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
//bool IsDate1BeforeDate2(stDate Date1, stDate Date2) {
//
//	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
//		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
//			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
//}
//
//
//stDate ReadFullDate() {
//	stDate Date;
//
//	Date.Day = ReadDay();
//	Date.Month = ReadMonth();
//	Date.Year = ReadYear();
//
//	return Date;
//
//}
//
//void problem13() {
//
//	stDate Date1 = ReadFullDate();
//	stDate Date2 = ReadFullDate();
//
//	if (IsDate1BeforeDate2(Date1, Date2)) {
//		cout << "\nYes, Date1 is Less than Date2.";
//	}
//	else {
//		cout << "\nNo, Date1 is NOT Less than Date2.";
//	}
//
//}